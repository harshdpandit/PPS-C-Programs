#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,maxsize,size,top=-1,bottom=-1,exit=1;
printf("Enter maximum size of queue: ");
scanf("%d",&maxsize);
printf("Enter size of queue: ");
scanf("%d",&size);
 int queue[100];
 printf("Enter contents of queue:");
 for (int i=0;i<size;i++,bottom++)
    scanf("%d",&queue[i]);
 top=0;
 bottom--;
 int option;
 while(exit!=0)
 {
 printf("Choose the correct option number: 1. Enqueue 2. Dequeue 3.Front 4.Display 5.exit ");
 scanf("%d",&option);
 switch(option)
 {
 case 1:
    if(size!=maxsize)
    {
        for(int i=size-1;i>=0;i--)
            queue[i+1]=queue[i];
        printf("Enter the number to be enqueued: ");
        scanf("%d",&queue[top]);
        bottom++;
        size++;
    }
    else
    {
        printf("queue is full\n");
    }
 case 2:
    {
    if (bottom!=-1)
        {
            bottom--;
            size--;
        }
        else
    {
        printf("queue is empty");
    }
    break;
    }
 case 3:
    {
    if (top!=-1)
        {
            printf("The front is: %d\n",queue[top]);
        }
        else
    {
        printf("queue is empty");
    }
    break;
    }
 case 4:
    {
        for (int i=0;i<=size;i++)
        {
            printf("%d",queue[i]);
        }
        printf("\n");
        break;
    }
 case 5:
    {
     exit=0;
     break;
    }
 default:
    {
        printf("Invalid Option Number");
    }
}
}
}
