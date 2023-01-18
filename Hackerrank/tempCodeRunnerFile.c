#include<stdio.h>
int main()
{
    int i=0;
    int a;
    int array[50];
    int sum=0;
    printf("enter the number");
    scanf("%d",&a);
    
for (int b = a; b >0 ; b= b/10)
{
    
 array[i] =b%10;
 i++;
}
for (int j = 0; j < i; j++)
{
    sum =sum+array[j];
}
printf("%d",sum);


    return 0;
}