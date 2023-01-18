#include <stdio.h>
int i, j, k, a, b, c;
int k = 0;
int i = 0;
int j = 0;
int l = 0;

int main()
{
    int a, b, c;

    printf("enter the number of lines of star triangle you want to print");
    scanf("%d", &a);
    b = a;
    c = b;
    printf("value of b and c is %d,%d",b)


    for (k; k < c; k++)
    {

        for (j; j <= b; b--)
        {

            for (int i; i <= b; i++)
            {

                printf("5");
            }

            for (int l; l <= k; l++)
            {

                printf("*");

                printf("\n");
            }
        }
    }
}
