#include <stdio.h>
int star(int a)
{

    for (int i = 0; i <= a; a--)
    {

        for (int k = 1; k <= a; k++)
        {
            for (int l = 0; l <= a; l++)
            {
                printf(" ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
           printf("\n");
        }
    }
     
}
int main()
{ int lines;
    printf("enter the number of lines of star triangle you want to print");
    scanf("%d", &lines);
   

    star(lines);
}

/*    *
     ***
    *****
   *******  */