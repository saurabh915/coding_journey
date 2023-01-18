// Online C compiler to run C program online
#include <stdio.h>
voidshowbit(int);
int main()
{
    int choice;
    int a;
    int b;
    printf("enterthe two vaalues");
    scanf("%d %d", &a, &b);
    int num1;
    printf("1.operation AND a&b\n");
    printf("2.operation XOR a^b\n");
    printf("3. operation OR a|b\n");
    printf("4. operationleft shift a<<\n");
    printf("5.  operation right shift>>\n");
    printf("6. operation negation ~\n");
    printf("enter the choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        num1 = a & b;
        showbit(num1);
        break;
    case 2:
        num1 = a ^ b;
        showbit(num1);
        break;
    case 3:
        num1 = a | b;
        showbit(num1);
        break;
    case 4:
        num1 = 2 << a;
        showbit(num1);
        break;
    case 5:
        num1 = 1 >> a;
        showbit(num1);
        break;
    case 6:
        num1 = ~a;
        showbit(num1);
        break;
    default:
        printf("wrong choice");
        break;
    }
    return 0;
}
void showbit(int n)
{
    int i, k, a;
    for (i = 15; i >= 0; i--)
    {
        a = 1 << i;
        k = n & a;
        k == 0 ? printf("0") : printf("1");
    }
}
