/* #include <stdio.h>
int main()
{
    printf("crate pointers\n");
int a = 23;
int *m=&a;
   printf("value of a is %d\n",a);
printf("value of *m is %d \n",*m);
printf("adress of a is %d\n",m);
printf("adress of a is %d\n",&a);
printf("adress of m pointer is %d\n",&m);
printf("address of a is %d\n",&(*m));
}*/
#include<stdio.h>
int main ()
{
printf("number swapping");
int a,b=56;
a=23;
int *ip;
ip=&a;
b=a;
printf("%d %d",b,*ip);

}
