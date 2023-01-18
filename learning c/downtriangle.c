#include<stdio.h>
int down( int a)
{
    for(int i=0; i<=a;a--)
{
    for(int j=1;j<=a;j++)
    {
        printf("*");
    }
    printf("\n");
}
}
int main ()
{
 int lines;
    printf("enter the number of lines of star triangle you want to print");
    scanf("%d", &lines);

     down( lines );
}