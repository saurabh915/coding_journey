#include <stdio.h>
int main()
{
    int number;
    int a, b;
    printf("enter the arithmetic operation you want to perform\n");
    printf("enter 1. to perform multiplication\n ");
    printf("enter 2.to perform division\n");
    printf("enter 3. to perform addition\n");
    printf("enter 4. to perform substraction\n");
    scanf("%d", &number);
    switch (number)
    {
        case 1:
        printf("enter the numbers to do multiplication\n");
        scanf("%d %d", &a, &b);
        printf("multiplication of two numbers is %d", a * b);
        break;
        case 2:
        printf("enter the numbers to do division\n");
        scanf("%d %d", &a, &b);
        printf("division of two numbers is %d ", a / b);
        break;
        case 3:
        printf("enter the numbers to do addition\n");
        scanf("%d %d", &a, &b);
        printf("addition of two numbers is %d ", a + b);
        break;
        case 4:
        printf("enter the numbers to do substraction\n");
        scanf("%d %d", &a, &b);
        printf("substraction of two numbers is %d ", a - b);
        break;
    }
}