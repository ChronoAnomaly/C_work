#include <stdio.h>
#include <string.h>

#define MAX_SIZE  100  /* max string length*/
#define FALSE 0
#define TRUE 1

main()
{

	int len;
	char s[MAX_SIZE];

	printf("Enter a string: ");
	scanf("%s", s);

 
	if (palindrome(s)){
		printf("Your string is a palindrome!\n");
	} else {
		printf("Your string is not a palindrome.\n");
	}
}


int palindrome(char* ptr)
{
	int i, size, valid;
	valid = TRUE;
	size = strlen(ptr);

	for(i = 0; i < size/2 && valid; i++){
		
		if(ptr[i] == ptr[size - 1 - i]){
			valid = TRUE;
		} else {
			valid = FALSE;
		}
	}
	
	return valid;

}
