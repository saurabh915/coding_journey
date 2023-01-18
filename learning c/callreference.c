#include<stdio.h>
    int somthing(int *a, int *b)
    {
        int temp;
     temp=*a;
     *a=*b;
     *b=temp;
     return 0;

    }
int main ()
{
printf("call by reference");
int x,y;
x=34;
y=8;
printf("values of a and b before swapping are %d and %d ",x,y);
 somthing( &x, &y);

printf("values of a and b after swapping %d and %d\n",x,y);
int *z;
*z=3;

printf("%d\n",z);
printf("%d",*z);
return 0;

}