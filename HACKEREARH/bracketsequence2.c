#include<stdio.h>
int main()
{
    int g,a=0;
    char s[50];
    scanf("%s",s);
    while(s[g] != '\0')
    {
        g++;
    }
    
    for(int i=0; i<g;i++)
    {
        int c=0;
        if(s[i]=='(')
        {
            for (int j = i; j < i+g; j++)
            {
               if (s[j%g]=='(')
               {
                   c++;
                  
               }
               else{
                   c--;
               }
               if(c<0)
               {
                   break;
               }
            }
            if(c==0)
               {
                   a++;
               }
        }
    }
    printf("%d",a);
  return 0;
}