#include <stdio.h>
int main()
{int factorial, variable;
  printf("enter the value of which you want factorial\n");
  scanf("%d",&factorial);
  variable=factorial;
  direction:
  variable--;
  if (factorial==0 || factorial==1 )
 {
 printf("factorial of given number is 1.\n");
 goto end;
 }
  if(variable>0)
  {
  factorial=factorial*variable;
  goto direction;
  printf("value of factorial is %d\n ",factorial);
  printf("value of variable is %d\n",variable);
  }
 printf("value of factorial is %d\n ",factorial);
end:
printf("thank you");
}

