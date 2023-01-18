
#include <stdio.h>
#include <stdlib.h>


int showbit(int);


int main()
{
    int choice;
    int a;
    int b;
    printf("enterthe two values\n");
    scanf("%d %d", &a, &b);
    int num1;
    printf("1.operation AND a&b\n");
    printf("2.operation XOR a^b\n");

    printf("enter the choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        num1 = a & b;
       int binary= showbit(num1);
       printf("%d",binary);
        break;
    case 2:
        num1 = a ^ b;
      binary= showbit(num1);
        printf("%d",binary);
        break;

    default:
        printf("wrong choice");
        break;
    }
    return 0;
}
int showbit(int n)
{
   long binarynum = 0;
    int rem, temp = 1;

    while (n!=0)
    {
        rem = n%2;
       n = n / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}
