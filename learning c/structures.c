#include<stdio.h>
#include<string.h>

struct book
{
   char title[20];
   char name[100];
   float price;
   int pages;
  

};
// void print(){
//  printf("\n title=%s",book1.title);
//     printf("\n name =%s",book1.name);
//     printf("\nprice=%.2f ",book1.price);
//     printf("\n pages= %d",book1.pages);
//     printf("\n title=%s",book2.title);
//     printf("\n name =%s",book2.name);
//     printf("\nprice=%.2f ",book2.price);
//     printf("\n pages= %d",book2.pages);
// }
char namearray( char  name[]){
    char sum_of_array;
    int i = 0;
    while ( name[i] != '\0' )
    {
       printf("%c",name[i]);
       sum_of_array+=name[i];
       i++;
    }
    return sum_of_array;
}
int main(){
   struct book book1,book2;
    char result;
    char name[] ={"saurabh"};
   strcpy(book1.title, "LIFE");
  
  result=namearray( name);
  book1.name='o';
//   printf("%s",result);
printf("nsme of the book is %c",book1.name);
  


    
    
    
return 0;
}