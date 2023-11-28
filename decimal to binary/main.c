#include <stdio.h>
#include <stdlib.h>
int binary_number[100];
int binary_length=0;
int main()
{
    int decimal_number;
    printf("Enter the number to be converted:");
    scanf("%d",&decimal_number);
    int remainder=10,qoutient=decimal_number;
    for(;qoutient>0;binary_length++)
    {
        remainder=qoutient%2;
        qoutient=qoutient/2;
        push (remainder,binary_length);
    }
    binary_length--;
    printf("Binary number is: ");
    for (int i=binary_length;i>=0;i--)
        printf("%d",binary_number[i]);
    return 0;
}
void push(int remainder, int binary_length)
    {
        for (int i=binary_length;i>=0;i--)
        binary_number[i+1]=binary_number[i];
        binary_number[0]=remainder;
    }


