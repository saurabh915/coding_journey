#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5
void push(int);
int isfull(void);
int isEmpty(void);
int a;
int item;
int pop();
void peek();
void traverse();

int stack[CAPACITY], top = -1;
int main()
{
    while (1)
    {
        int ch;
        printf("enter the operation you want to perform\n");
        printf("1.push();\n");
        printf("2.pop();\n");
        printf("3.peek();\n");
        printf("4.traverse()\n;");
        printf("5.Quite\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:

            printf("enter the element to add\n");
            scanf("%d", &a);
            push(a);

            break;
        case 2:
            printf("your top element is removing\n");
            item = pop();
            if (item == 0)
            {
                printf("stack is empty\n");
            }
            else
            {
                printf("%d item is popped\n");
            }

            printf("removed element is %d\n", item);

            break;
        case 3:
            printf("top value is peeking\n");
            peek();
            break;
        case 4:
            traverse();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("invalid input is added\n");
            break;
        }
    }

    return 0;
}
void push(int ele)
{
    if (isfull())
    {
        printf("stack is overflow\n");
    }
    else
    {
        top++;              /*to increment top from 0 to 1 initially*/
        stack[top] = ele;
        printf("%d element is pushed\n", ele);
    }
}
int isfull()
{
    if (top == CAPACITY - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop()
{
    if (isEmpty())
    {
        printf("your stack is empty\n");
        return 0;
    }
    else
    {
        return stack[top--];
    }
}
int isEmpty()
{
    if (top == -1)
    {
        printf("stack is empty\n");
        return 1;
    }
    else
    {
        return 0;
    }
}
void peek()
{
    if (isEmpty())
    {
        printf("your stack is empty\n");
    }
    else
    {
        printf("%d is value peeked\n", stack[top]);
    }
}
void traverse()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d\n", stack[i]);
        }
    }
}