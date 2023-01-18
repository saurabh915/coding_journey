

#include<stdio.h>

void change(int array[], int* n)
{
array[0]=99;
*n=25;

}


int main ()
{
  int n=10;
int array[5];
for (int  i = 0; i < 5; i++)
{
  scanf("%d",&array[i]);
}
for (int j = 0; j < 5; j++)
{
  printf("\n");
  printf("%d\n",array[j]);
}
change(array, &n);
printf("value of n is %d\n",n);
for (int j = 0; j < 5; j++)
{
  printf("%d\n",array[j]);
}

  return 0;
}