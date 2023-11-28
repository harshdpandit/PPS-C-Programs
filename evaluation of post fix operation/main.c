#include<stdio.h>
#include<ctype.h>
int stack[20];

int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[20];
    char *e;
    int n1,n2,n3,num;
    printf("Enter the expression : ");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    {
        if(isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*e)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(n3);
        }
        e++;
    }
    printf("The result of expression %s  =  %d\n",exp,pop());
    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

int stack[200];
int top=-1;
int pop()
{
  return stack[top--];
}
void push(int num)
{
    stack[++top]=num;
}
int main()
{
int n1,n2,n3,n4;
char expression[20];
printf("Enter the expression to be evaluated:");
scanf("%s",expression);
char *e=expression;
while(*e!='\0')
{
    if((*e!='+')||(*e!='-')||(*e!='/')||(*e!='*'))
    {
        n4=*e-48;
        push(n4);
    }
    else
    {
        n1=pop();
        n2=pop();
        switch(*e)
        {
        case '+':
            {
                n3=n1+n2;
                break;
            }
        case '-':
            {
                n3=n2-n1;
                break;
            }
        case '*':
            {
                n3=n1*n2;
                break;
            }
        case '/':
            {
                n3=n2/n1;
                break;
            }
        }
    push(n3);
    }
e++;
}
printf("%s=%d",expression,pop());
return 0;
}*/

