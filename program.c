#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdint.h>


void* calculate(void* args){

	int print=(int)(intptr_t)args;
	printf("\nFrom Main:%d\n",print);
	return NULL;

}


int main(){

pthread_t t_id;
int a=90;
void* args;

pthread_create(&t_id,NULL,calculate,(void *)(intptr_t)a);

pthread_join(t_id,NULL);

return 0;

}
