
#include <stdio.h>
#include <stdlib.h>

/*
 * Program for testing out reading arguments from the command line / passed in at startup
 * argc: the number of arguments, it is a non-negetive number
 * if argc > 1 then argv[1] to argv[argc-1] are the arguments passed to the program
 * argv[0] is the name of the program
*/

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
