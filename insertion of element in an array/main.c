#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int m,n,b;
    printf("Enter the length of the array: ");
    scanf("%d",&m);
    printf("Enter the terms of the array: \n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the index number where term is to be inserted: ");
    scanf("%d",&n);
    printf("Enter the number to be inserted: ");
    scanf("%d",&b);
    for(int j=m;j>=n;j--)
    {
    a[j+1]=a[j];
    }
    a[n]=b;
    m++;
    for(int k=0;k<m;k++)
        printf("%d",a[k]);
    return 0;
}
