#include <stdio.h>
int sum(int a, int b)
{


   return a+b;
}
int main()
{
    int a=5, b=7, c; 
 c= sum(a,b);
 printf("the value of c is %d",c);
 return 0;
}