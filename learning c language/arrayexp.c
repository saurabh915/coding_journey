#include<stdio.h>
int main()
{
    printf("hello,world");
     int arry[13]={1,4,5,4,3,4,3,4,5,6};
     int *ptr =arry;
  
printf("value of arry[5] %d\n",arry[5]); 
printf("addresss of &arry[5] %d\n",&arry[5]);
// printf("addresss of arry %d\n",*(&arry[0]));
 printf("value of *(&arry[5]) %d\n",*(&arry[5]));//this implies that *(&arry[5])=*(ptr+5)
printf("value of ptr+5 %d\n",*(ptr+5));
printf("value of &ptr+5 %d\n",&ptr+5);
printf("value of &ptr5 %d\n",&ptr);

 return 0;
}
