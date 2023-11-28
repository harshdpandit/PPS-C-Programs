#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stack[100];
    int top=-1,size,operation,number,pop,loop=5;
    printf("Enter size of the stack: ");
    scanf("%d",&size);
    printf("Enter the contents of stack:");
    for (int i=0;i<size;i++)
        scanf("%d",&stack[i]);
    while(loop!=0)
{
    printf("Enter the operation number want to do:\n");
    printf("1.Push\n");
    printf("2.POP\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    scanf("%d",&operation);
    if (operation==1)//push operation
    {
        for (int i=size-1;i>=0;i--)
        stack[i+1]=stack[i];
        printf("Enter the number to be pushed:");
        scanf("%d",&number);
        stack[0]=number;
        size++;
    }
        if (operation==2)//pop operation
    {
        if (top==size-1)
        printf("Stack is empty");
        else
        {
        pop=stack[0];
        for (int i=0;i<size;i++)
        stack[i]=stack[i+1];
        size--;
        }
    }
    if (operation==3)//display operation
    {
        if (top==size-1)
        printf("Stack is empty\n");
        else
        {
        for (int i=0;i<size;i++)
        printf("%d",stack[i]);
        printf("\n");
        }
    }
    if (operation==4)
    {
        loop=0;
    }
}


}

