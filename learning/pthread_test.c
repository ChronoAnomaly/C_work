#include <stdio.h>
#include <pthread.h>


void *fract()
{
	int i;
	for (i = 0; i < 10000; i++) {
		printf(" %d, ", i);
		i += i;
	}
	printf("\n");
}

void *message(void *argument)
{
	int passed_in_value;

	passed_in_value = *((int*) argument);
	printf("Hello, from thread %d.\n", passed_in_value);
}

int main(void)
{
	printf("Started to create the threads.\n");

	int index = 1;
	pthread_t thread1, thread2;

	pthread_create(&thread1, NULL, fract, (void*) NULL);
	pthread_create(&thread2, NULL, message, (void*) &index);

	printf("Waiting for threads to finish.\n");


	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	
	return 0;
}
