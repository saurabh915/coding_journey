#include<stdio.h>
int a[5] ={12,12,12,12,12};
int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d %d \n",i,j);
           if (a[i]==a[j])
            {
                break;
                
            }
            //printf("after braking  i fall into inner for loop");
        }
      //   printf("after braking  i fall into outer for loop");

    }
    
    return 0;
}