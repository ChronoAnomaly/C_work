
#include <stdio.h>

void sample(int arr[], int* length);

int main()
{

	int i;
	int array_size = 10;
	int arr[array_size];

	printf("address of array_size is: %p\n", &array_size);

	for (i = 0; i < array_size; i++) {
	
		printf("Address of arr[%d] is: %p and contains: %d\n",
			 i, &arr[i], arr[i]);
	}

	printf("Entering the test function.\n");

	sample(arr, &array_size);

	return 0;
}

void sample(int arr[], int* length)
{

	int i;
	printf("address of length is: %p\n", &*length);

	for (i = 0; i < *length; i++) {
	
		printf("Address of arr[%d] is: %p and contains: %d\n",
			 i, &arr[i], arr[i]);
	}
}
