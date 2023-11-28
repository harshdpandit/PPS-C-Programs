#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=10,m,z,c=0;
    int a[10];
    printf("Enter the contents of array:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched:");
    scanf("%d",&m);
    for (z=0;z<n;z++)
    {
        if(a[z]==m)
               {
                   printf("Element is present at index number: %d\n",z);
                   c++;
               }
    }
    if (c==0)
        printf("Element not in array.");
    return 0;
}
