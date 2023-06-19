#include <stdio.h>
#include <math.h>
#include "functions.h"


unsigned int main(void)
{
    printf("Hello World!\n");
    printf("%f\n", M_PI);
    double test = sin(0.46);
    printf("Sin: %lf\n, %d",test, add(10,2));
    
    return 0;
}

