#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,temp,min,c,i,j;
    int array[100];
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the array: ");
    for (int i=0;i<size;i++)
    scanf("%d",&array[i]);
    printf("The sorted array is:");
    for (i=0;i<size-1;i++)
    {
        min=array[i];
        for (j=i+1;j<size-1;j++)
        {
            temp=array[j];
            if(min>temp)
                temp=array[j+1];
        }
        c=array[j+1];
        array[j+1]=min;
        array[i]=c;
    }

    for (i=0;i<size;i++)
        printf("%d",array[i]);
    return 0;
}
