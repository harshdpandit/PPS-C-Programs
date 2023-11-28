#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int size,n,mid,mid_term,num,top=0,end,j=0,c=1;
    printf("Enter the size of array:");
    scanf("%d",&size);
    n=size;
    end=size-1;
    printf("Enter the array:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number to search: ");
    scanf("%d",&num);
    mid=(a[top]+a[end])/2;
    mid_term=((top+end)/2);
    //printf("md is %d",mid_term);
    while(mid!=num)
    {
    if(num>mid)
    {
        top=mid_term;
        mid=(a[top]+a[end])/2;
        mid_term=((top+end)/2);

    }
    if(num<mid)
    {
        end=mid_term;
        mid=(a[top]+a[end])/2;
        mid_term=((top+end)/2);
    }
    }
    if(mid==num)
    {
        printf("The number is present at: %d",mid_term+1);
    }
}
