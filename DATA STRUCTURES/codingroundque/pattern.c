#include<stdio.h>
int main()
{
    for (int i = 3; i < 7; i++)
    {
        for (int j = 3; j <= i; j++)
        {
           printf("%d",i);
        }
        printf("\n");
    }
     for (int i = 7; i >= 3; i--)
    {
        for (int j = 3; j <= i; j++)
        {
           printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}