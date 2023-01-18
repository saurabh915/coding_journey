#include <stdio.h>
struct student {
int id;
    int marks;
    char fav_char;
    char name[34];
} ;
int main( ) {
 struct student book1 = { 34, 54, 'c', "saurabh" } ;
printf ( "\n Title = %d", book1.id ) ;
printf ( "\n Name = %d", book1.marks ) ;
printf ( "\n Price = %.2f",book1.fav_char ) ; 
printf ( "\n Pages = %d", book1.name ) ;
return 0;}