#include <stdio.h>

#define LOWER 0     //Has no semicolon at the end
#define UPPER 300
#define STEP 20

void main()
{
    printf("Symbolic Constants\n");
    int fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
