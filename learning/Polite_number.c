#include <stdio.h>

int politeNumber(int number);

int main()
{
	int num;

	printf("Plese enter a number: ");
	scanf("%d", &num, "\n");

	politeNumber(num);

	return 0;
}


/* Function print out the polite number answer for the user.
    The polite number is num + (num + 1). */
int politeNumber(int x)
{
	x += (x + 1);
	printf("Polite Number: %d \n", x);

}
