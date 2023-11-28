#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Enter your number:");
    scanf("%f",&a);
    if (a>0)
        printf("Number is positive.");
    else
        printf("Number is negative.");
}
