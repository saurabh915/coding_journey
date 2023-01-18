#include<stdio.h>
int main()
{
    int x,y,l,a,b;
    a=10;
    //  x=();
    // printf("%d\n",x);
    //  y=(); 
    // printf("%d\n",y);
    b=(a++)+(++a);
    printf("%d\n",b);
    
    int m=10;
    //  x=++m;
    // printf("%d\n",x);
    // y=m++; 
    // printf("%d\n",y);
   
    l=(++m)+(m++);
   printf("%d\n",l);
    return 0;
}