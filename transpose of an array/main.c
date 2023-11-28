#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100];
    int m,n,k;
    printf("Enter the length of array: ");
    scanf("%d",&m);
    printf("Enter the breadth of array: ");
    scanf("%d",&n);
    printf("Enter the array:");
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix  is:\n");
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
     for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            k=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=k;
        }
    }
    printf("The transpose of matrix  is:\n");
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
