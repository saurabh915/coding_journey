#include<stdio.h>
int main()
{
    int count=1;
    char s[30];
    printf("enter the string:");
    scanf("%[^\n]s",s);
    for (int i = 0; s[i]!='\0'; i++)
    {
        if(s[i]==' ')
       {
           count = count+1;
        
       }
       
    }
    printf("%d",count);



    return 0;
}