#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
   
    int number;
    int d,e,f;
if(n<=4)
{
   if(n==4)
   { return 6;}
   else
   {
       return 0;
   }
   
   
}
else
{
  d=find_nth_term( n-1, a, b,c);
  printf("d=%d\n",d);
  e= find_nth_term( n-2, a, b, c);
   printf("e=%d\n",d); 
  f= find_nth_term( n-3, a, b, c);
   printf("f=%d\n",d);
   printf("%d",d+e+f);
  return d+e+f;
}

}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d\n", ans); 
    return 0;
}