#include <stdio.h>

void main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    // Fahr will be equal to 0
    fahr = lower;

    printf("F\t|\tC\n");
    while(fahr <= upper){
        celsius = 5 * (fahr-32)/9;
        printf("%d\t->\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
