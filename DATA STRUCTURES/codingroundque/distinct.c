#include<stdio.h>
void distinct(int a[], int n)
{
    printf("i am in a function");
    int i,j;
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)//let a = {21,13,12,14,13,12,12}
        {
            if (a[i] == a[j])
            {  
            printf(" i found equals") ;             
               a[j]=0;
            }
            
        }
        
    }
   

}
int main()
{
    int size_array,i,arr[20];
    scanf("%d",&size_array);
    for(i=0;i<size_array;i++)
    {
        scanf("%d",&arr[i]);
    }
    distinct(arr, size_array);
    printf("\n");
        printf("\n");

    printf("\n");

        for (int k = 0; k <size_array; k++)
    {
       if (arr[k]!= 0)
       {
           printf("%d\n",arr[k]);
       }
       
    }
 
    
    return 0;
}
