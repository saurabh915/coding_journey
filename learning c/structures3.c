#include <stdio.h>
#include <string.h>
struct my
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} ;
// struct Student harry, ravi, shubham;
// char namearray( char  name[]){
//     char sum_of_array;
//     int i = 0;
//     while ( name[i] != '\0' )
//     {
//        printf("%c",name[i]);
//        sum_of_array+=name[i];
//        i++;
//     }
//     return sum_of_array;
// }
// void print()
// {
//     printf("%s\n", harry.name);
//     printf("%s\n", shubham.name);
//     printf("%s\n", book1.name);
// }

int main()
{
    struct my hook = { 34, 54, 'c', "saurabh" } ;
    printf ( "\n Title = %d", hook.id );
printf ( "\n Name = %d", hook.marks ) ;
printf ( "\n Price = %c",hook.fav_char ) ; 
printf ( "\n Pages = %s", hook.name) ;
    // harry.id = 1;
    // ravi.id = 2;
    // shubham.id = 3;
    // harry.marks = 66;
    // ravi.marks = 466;
    // shubham.marks = 46;
    // harry.fav_char = 'p';
    // ravi.fav_char = 'y';
    // shubham.fav_char = 'o';
//   typedef book1.name game;
   
   
   
    // strcpy(harry.name, "Harry Potter student of the year");
    // strcpy(shubham.name, "Shubham Kumar");
    // printf("Harry got %d marks\n", harry.marks);
    // printf("Harry's name is: %s\n", harry.name);
    // printf("Shubham got %d marks\n", shubham.marks);
    // printf("Shubham's name is: %s\n", shubham.name);
    // print();
    // Quick Quiz
    // print all the information of a given student

    return 0;
}
