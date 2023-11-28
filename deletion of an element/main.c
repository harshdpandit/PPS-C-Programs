#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10,m,z;
    int a[10];
    printf("Enter the contents of array:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
   /* printf("Enter the number to be inserted:");
    scanf("%d",&z);*/
    printf("Enter the index number where number is to be deleted:");
    scanf("%d",&m);
    for (z=m;z<=10;z++,m++)
    {
        a[m]=a[m+1];
    }
    n--;
    for (int j=0;j<n;j++)
        printf("%d\n",a[j]);
    return 0;
}
