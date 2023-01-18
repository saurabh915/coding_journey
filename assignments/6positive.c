#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number:");
    scanf("%d",&a);
    b=1;
    if(a*b >= 0)
    {
        printf("it is an positive number");
        
    }
    else
    {
        printf("it is an negative number");
    }
}