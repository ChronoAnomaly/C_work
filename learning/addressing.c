
#include <stdio.h>

int main()
{

	int i, j;
	int array_size = 20;
	int arr[array_size][array_size];

	for (i = 0; i < array_size; i++) {
	
		j = 0;
		printf("Address of arr[%d][%d] is: %p and contains: %d\n",
			 i, j, &arr[i][j], arr[i][j]);

		for (j = 0; j < array_size; j++) {

			printf("Address of arr[%d][%d] is: %p and contains: %d\n",
				 i, j, &arr[i][j], arr[i][j]);
		}
	}

	return 0;
}
