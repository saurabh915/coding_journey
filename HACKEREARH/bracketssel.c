#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    int k=0;
    int g=0;
    char array[50];
    scanf("%s",array);
    while(array[g] != '\0')
    {
        g++;
    }
    // printf("size of array is %d\n",g);
   while(array[i] != '\0')
    {
       
        
        if(array[i]=='(' )
        {
               j++;
               i++;
            //    printf("incremented due to ( is %d\n",j);
        }
        else
        {
            if(array[i]==')' )
        {
            k++;
            i++;
            //  printf("incremented due to %d ) is %d\n",k);
        } 
        else{
            i++;
        }
        }
       
        
    }
   
if(j<=k)
{
    printf("%d",j);
}
else
{
    if(k<j)
    printf("%d",k);
}

    return 0;
}
