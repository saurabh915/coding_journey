#include<stdio.h>
#include<stdlib.h>
int main()
{
//     int *ptr;
// ptr= (int*)malloc(3*sizeof(int));
// for (int i = 0; i < 3; i++)
// {
//     printf("enter the falue for place %d\n",i);
//     scanf("%d", ptr[i]);
// }

// for (int i = 0; i < 5; i++)
// {
//     printf("only 1 or 2\n");
//   printf("the value at %d , is %d", i, ptr[i]);
// }
int n;
int *ptr;
ptr= (int*)calloc(3,sizeof(int));
printf("enter the new size of array\n");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    printf("enter the value for place %d\n",i);
    scanf("%d", &ptr[i]);
}

for (int i = 0; i < n; i++)
{
  
  printf("the value at %d , is %d", i, ptr[i]);
}
printf("enter the new size of array\n");
scanf("%d",&n);
ptr=(int*)realloc(ptr,n*sizeof(int));
for (int i = 0; i < n; i++)
{
   printf("enter the value for place %d\n",i);
  scanf(" %d\n",  &ptr[i]);
}
for (int i = 0; i < n; i++)
{
  
  printf("the value at %d , is %d", i, ptr[i]);
}
return 0;
}