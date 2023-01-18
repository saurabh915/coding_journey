// strcat( ):-
// This function is used to concatenates the source string at the end of the target string. For example, “Hello” and “World” on concatenation would result into a string “HelloWorld”. Here is an example of strcat( ):
#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Hello";
    char t[30] = "World";
    strcat(s, t);
    printf("String = %s", s);
}