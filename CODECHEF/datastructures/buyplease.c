#include<stdio.h>
int main ()
{
    int total;
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }
    total = a[0]*a[2]+a[1]*a[3];
    printf("%d",total);
    
    return 0;

}