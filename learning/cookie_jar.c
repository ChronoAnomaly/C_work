#include <stdio.h>


main()
{

	int people, cookies;

	printf("Number of People: ");
	scanf("%d", &people, "\n");
	printf("Number of Cookies: ");
	scanf("%d", &cookies, "\n");

	printf("Cookies each: %d\n", (cookies / people));
	printf("Cookies left: %d\n", (cookies % people));

	return 0;
}
