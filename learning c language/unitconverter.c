#include <stdio.h>
int main()
{
int type, km,c,m,kg,g;


printf("enter the number of type for conversion 1. kmtom 2. mtocm  3.kgtog \n");
scanf("%d",&type);

if( type == 1)
{
    printf("enter the numbers for converting km to m\n");
 scanf("%d",&km);
 c=km*1000;
 printf("the value of given number in meters is %d \n ",c );
}
if (type == 2)
{
  printf("enter the number for converting meter to cm\n");
  scanf("%d",&m);
  c=m*100;
  printf("the value of cm of your value is %d\n",c); 
}
if(type==3)
{
    printf("enter the value of which you want convertion from kg to g\n");
    scanf("%d",&kg);
    c=kg*1000;
    printf("your converted value is %d",c);
}
}