#include<stdio.h>
int main()
{  
    int num =NULL;
    int maximum;
    int minimum;
    while(1)
    {
    printf("enter the number");
    scanf("%d",num);
    if(num == "done")
    {
        printf("maximum is %d",maximum);
        break;
    }
    else{
          if(num==NULL)
         {
            maximum=num;
         }
     

         if(maximum<num)
         {
             maximum=num;
         }
     
        }

    }
return 0;

}