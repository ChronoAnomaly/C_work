#include <stdio.h>

#define UPPER 300
#define LOWER -100
#define STEP 10

/* Celsius to Fahrenheit conversions from 
    celsius -100, ......, 300 by steps of 10 */

main() {

	float fahr, celsius;

	printf("Celsius  Fahrenheit\n");

	for(celsius = LOWER; celsius <= UPPER; celsius += STEP) {
		
		fahr = celsius * (9.0/5.0) + 32;
		printf("%6.1f %8.0f\n", celsius, fahr);
	}
}
