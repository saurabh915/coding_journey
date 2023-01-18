#include <stdio.h>
int main()
{
    char c;
    char s[100];
    char ls[100];
    scanf("%c\n", &c);
    scanf("%s\n", s);
    scanf("%[^\n]",ls);
    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s", ls);
    return 0;
}