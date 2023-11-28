#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int value;
    struct node* next;
}node;
int main()
{
    int size,number,choice=89;
    printf("Enter the size of the list: ");
    scanf("%d",&size);
    node*head=NULL;
    node*temp;
    for (int i=0;i<size;i++)
    {
        node *new_node;
        new_node=malloc(sizeof(node));
        if(i==0)
        {
            head=new_node;
            temp=head;
        }
        printf("Enter the number to be inserted:");
        scanf("%d",&(new_node->value));
        new_node->next=NULL;
        temp->next=new_node;
        temp=temp->next;
    }
    printf("What do you want to do? 1. Traverse 2. Add an element at beginning 3. Add an element at end 4. Exit");
    printf("Please enter the serial number: ");
    scanf("%d",&choice);
    while(choice!=4)
    {
    if (choice==1)
    {
    printf("The linked list is: ");
    temp=head;
    while(temp !=NULL)
    {
        printf("-%d",temp->value);
        temp=temp->next;
    }
     printf("\n");
     printf("What do you want to do? 1. Traverse 2. Add an element at beginning 3. Add an element at end 4. Exit");
     printf("\nPlease enter the serial number: ");
     scanf("%d",&choice);
    }
    if (choice==2)
    {
        int num;
        temp=head;
        printf("\nPlease enter a number to be inserted:" );
        scanf("%d",&num);
        node *new_node;
        new_node=malloc(sizeof(node));
        new_node->value=num;
        head=new_node;
        head->next=temp;
        printf("\n");
        printf("What do you want to do? 1. Traverse 2. Add an element at beginning 3. Add an element at end 4. Exit");
        printf("\nPlease enter the serial number: ");
        scanf("%d",&choice);
    }
    if (choice==3)
    {
        int num;
        printf("\nPlease enter a number to be inserted:" );
        scanf("%d",&num);
        node *new_node;
        new_node=malloc(sizeof(node));
        temp=head;
        new_node->value=num;
        new_node->next=NULL;
        while(temp!=NULL && temp->next!=NULL)
            temp=temp->next;
        temp->next=new_node;
        printf("What do you want to do? 1. Traverse 2. Add an element at beginning 3. Add an element at end 4. Exit");
        printf("\nPlease enter the serial number: ");
        scanf("%d",&choice);
    }
    }
}


