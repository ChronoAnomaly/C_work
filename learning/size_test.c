#include <stdio.h>

int main()
{

	int i = 0x10;
	char c = 0xfb;

	if( (c & 0xf0) == 0xf0) {
		printf("Pong\n");
	}
	printf("testing stuff %x char 0x%032x\n", i, c);
	printf("Char size: %ld  Int size: %ld  \n", sizeof(char), sizeof(int));

}
