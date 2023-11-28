#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    switch (a)
    {
    case 0: printf("Number is zero"); break;
    default: printf("Number is non-zero");
    }
}
