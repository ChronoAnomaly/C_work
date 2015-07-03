
#include <stdio.h>
#include <limits.h>

int main()
{

	printf("Limits on the current machine.\n");
	printf("------------------------------------------------\n");

	printf("CHAR_BIT:\t%d\n", CHAR_BIT);
	printf("SCHAR_MIN:\t%d\n", SCHAR_MIN);
	printf("SCHAR_MAX:\t%d\n", SCHAR_MAX);
	printf("UCHAR_MAX:\t%u\n", UCHAR_MAX);
	printf("CHAR_MIN:\t%d\n", CHAR_MIN);
	printf("CHAR_MAX:\t%d\n", CHAR_MAX);
	printf("MB_LEN_MAX:\t%d\n", MB_LEN_MAX);
	printf("SHRT_MIN:\t%d\n", SHRT_MIN);
	printf("SHRT_MAX:\t%d\n", SHRT_MAX);
	printf("USHRT_MAX:\t%u\n", USHRT_MAX);
	printf ("INT_MIN:\t%d\n", INT_MIN);
	printf("INT_MAX:\t%d\n", INT_MAX);
	printf("UINT_MAX:\t%u\n", UINT_MAX);
	printf("LONG_MIN:\t%ld\n", LONG_MIN);
	printf("LONG_MAX:\t%ld\n", LONG_MAX);
	printf("ULONG_MAX:\t%lu\n", ULONG_MAX);	

	return 0;
}
