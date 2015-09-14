#include <stdio.h>


int main()
{
	char* i = "hello";

	while(*i) {
		
		printf("%c", *i);
		i++;
	}
	return 0;
}
