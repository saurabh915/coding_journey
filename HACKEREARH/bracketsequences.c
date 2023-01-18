#include<stdio.h>
int main()
{
    int i=0;
    int z=0;
    int g=0;
    char array[50];
    scanf("%s",array);
    while(array[g] != '\0')
    {
        g++;
    }
    printf("size of array is %d\n",g);
   for(int i=0; i<g;i++)
{
    int j=i+1;
    while(array[i]=='(' && array[i] != g-1)
   
    {
        here:
      if(array[j]==')' )
      {
          z++;
          i++;

      }
      else
      {
          if(array[j] != '\0')
          {
              goto end;
          }
          j++;
          goto here;
      }

    }
}
end:
printf("%d",z);
    return 0;
}
