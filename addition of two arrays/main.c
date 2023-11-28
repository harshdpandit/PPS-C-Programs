#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],b[100][100],c[100][100];
    int m,n;
    printf("Enter the length of two arrays: ");
    scanf("%d",&m);
    printf("Enter the breadth of two arrays: ");
    scanf("%d",&n);
    printf("Enter the first array:");
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second array:");
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The matrix of sum of two arrays is:\n");
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}
