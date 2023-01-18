#include<stdio.h>
void  halfascending(int a[],int n)
{
    for (int i = 0; i < n/2; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
               int temp =a[j];
                a[j] =  a[i];
                a[i]=temp;
            }
            
        }
        
    }
     for (int i = n/2; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]<a[j])
            {
               int temp =a[j];
                a[j] =  a[i];
                a[i]=temp;
            }
            
        }
        
    }
    
}
int main ()
{
     int size_array,i,arr[20];
    scanf("%d",&size_array);
    for(i=0;i<size_array;i++)
    {
        scanf("%d",&arr[i]);
    }
   halfascending(arr, size_array);
    for (int k = 0; k <size_array; k++)
    {
       
       
           printf("%d\n",arr[k]);
       
       
    }
    return 0;
}