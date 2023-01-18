#include <stdio.h>

int main() { 
   int divider, number;
   int prime = 1;
   printf("enter the number to  check whether the nmber is prime or not\n");
   scanf("%d",&number);

   for(divider = 2; divider < number; divider++) {
      if((number % divider) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("%d is prime number.", number);
   else
      printf("%d is not a prime number.", number);
   return 0;
}