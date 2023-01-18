

#include<stdio.h>
int main ()
{
int arr[8]={5,4,1,9,7,3,2,6};

for (int i = 0; i < 8; i++)
{
    int min;
    min=i;
    for (int j = i+1; j < 8; j++)
    {
       if (arr[j]<arr[min])
       {
           min=j;
       }
       
    }

    int temp;
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;

    
}
for (int i = 0; i < 8; i++)
    {
        printf("%d,", arr[i]);
    }
return 0;

}