#include<stdio.h>
int main()
{

    int b,a,c;
    float n,s,k,l;

    printf("enter the starting and ending numbers from which continuous additionshould be done\n"); 
    scanf("%d %d", &a,&b);
    if(a==b && b==a)
    {
        printf("incorrect input data");
    }
    else{
    n=b-a;
    n++;
    
    s=n/2;
    k=2*a+n-1;
    l=s*k;

    printf("addition is %f",l);
    }
}