#include<stdio.h>
saurabh(array , t)
{
    int t;
    t--;
   if(t==0) 
   {
       
   }
   else{
       printf("%s",saurabh(array[t]))
   }
}
int main()
{
    int n;
    printf("enter the lenth of array\n");
    scanf("%d",&n);

    char array[n];

    
    scanf("%s",array);
    printf("%s",saurabh(array , n) );


    return 0;
}