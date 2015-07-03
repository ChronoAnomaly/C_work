
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[])
{

	if (argc < 2) {
	
		printf("Not enough arguments for the program.\n");
		return 1;
	}

	printf("Number of arguments: %d\n", argc);

	int i;

	printf("Program name: %s\n", argv[0]);

	printf("String arg: %s\n", argv[1]);

	for (i = 2; i < argc; i++) {

		printf("Arg[%d]: %d\n", i, atoi(argv[i]));
	}

	return 0;
}
