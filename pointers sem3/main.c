#include <stdio.h>
#include <stdlib.h>
/* This program converts temperature in celsius into kelvin */
int main()
{
    int kelvin,celsius;
    int *p;
    printf("Enter temperature in celsius:");
    scanf("%d",&celsius);
    p=&celsius;
    kelvin=*p+273;
    printf("Temperature in Kelvin is: %d",kelvin);
}
