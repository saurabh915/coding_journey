#include <stdio.h>
#include <string.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[6] = "harry";
    char str[34];
    gets(str);
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("using puts: \n");
    puts(str);
    //     strlen( ):-
    // This function is used to counts the number of characters present in a string. Its example is given below:

    char strg[] = "Harry";
    int str_length;
    str_length = strlen(strg);
    printf(" length = %d", str_length);

    //     strcpy( ):-
    // This function is used to copies the contents of one string into another. The base addresses of the source and target strings should be given to this function. Here is an example of strcpy( ):

    char my[] = "CodeWithHarry";
    char your[26];
    // strcpy(your, my);
    printf("\n Source string = %s", my);
    printf("\n Target string = %s", your);

//And here is the output...
//Source string = CodeWithHarry
//Target string = CodeWithHarry



return 0;
}