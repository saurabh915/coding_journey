// strcmp( ):-
// This function is used to compares two strings to find out whether they are same or different. The strcmp() will compare two strings character by character until there is a mismatch or end of one of the strings is reached. If both of the strings are identical, strcmp( ) returns a value zero. If they are not identical, it will return the numeric difference between the ASCII values of the first non-matching pairs of characters. Here is a example of strcmp( ).

#include <stdio.h>
#include <string.h>
int main()
{
char string1[ ] = "harry" ;
char string2[ ] = "Harry" ;
int a;
a= strcmp ( string1, string2 ) ;
printf ("\n%d", a) ;
return 0;
}
//Output:5