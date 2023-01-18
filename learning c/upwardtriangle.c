#include <stdio.h>
int upward(int a)
{
    for (int k = 0; k < a; k++)
    {
        for (int l = 0; l <=  k; l++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int lines;
    printf("enter the numbers of lines of star");
    scanf("%d", &lines);
    upward(lines);
}