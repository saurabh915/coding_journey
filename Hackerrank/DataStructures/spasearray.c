#include<stdio.h>
#include<string.h>
int main()
{
    int inputs,q,count=0;
    // int check =0;
    char input[20][1000];
    char queries[20][1000];
    printf("enter the no. of input string");
    scanf("%d",&inputs);
    printf("enter the input strings");
    for (int k = 0; k < inputs; k++)
    {
        scanf("%s",&input[k][0]);
       
    }
     printf("enter the no. of queries string");
    scanf("%d",&q);
    printf("enter the queries strings");
    for (int i = 0; i < q; i++)
    {
        
        
          scanf("%s",&queries[i][0]);
    }
     
    for (int m = 0; m < q; m++)
    {
        for (int j = 0; j < inputs; j++)
        {

            // for (int k = i-1; k > 0; k--)
            // {
            //     if (queries[i] != input[k])
            //     {
            //         check++;
            //     }
                
               
            // }
        //     cout<<queries[m]<<input[j]<<endl;
        //   cout<<count<<endl;
      
        int value = strcmp(queries[m],input[j]);         
            if (value == 0)
           {
              
               count++;
           }
        }
          
        printf("%d\n",count);
        count=0;
    }
    
     
    
   
    
   
 
  
}