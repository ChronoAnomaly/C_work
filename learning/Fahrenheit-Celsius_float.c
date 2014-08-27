#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
main() {

    float fahr, celsius;
    int lower, upper, step;

    lower = -300;	/* lower limit of temperature table */
    upper = 300;	/* upper limit of temperature table */
    step = 10;		/* step size */

    printf("Fahrenheit   Celsius\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius =  (5.0/9.0) * (fahr - 32);
        printf("|%8.0f | %7.1f|\n", fahr, celsius);
        fahr += step;
    }
}
