#include <stdio.h>
int r;
int c;
// void printStr(char str[r][c])
// {
    // int i = 0;
    // int j = 0;
    // while (str[j][i] != '\0')
    // {

    //     printf("%c", str[j][i]);
    //     i++;
    // }
    // printf("\n");
    // j++;
    // printf("func upto here1");
    // printf("%c ", str[][]);
    // int i, j;
    // for (j = 0; j < r; j++)
    // {
    //     for (i = 0; i < c; i++)
    //     {
    //         printf("func upto here2");
    //     }
    //     printf("\n");
    // }
// }
int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[6] = "harry";
    int  r, c;
    printf("number of rows and columns you want:");
    scanf("%d %d", &r, &c);
    // char str[r][c];
    // for (j = 0; j < r; j++)
    // { for (int i = 0; i < c; i++)
    // {

    //     scanf("%c", str);

    //     // gets(str);
    //     // printf("Using custom function printStr\n");
    // }}
    char str[r][c];
    int i=0;
    int j=0;
    while (str[j][i] != '\0')
    {

        scanf("%c", str[j][i]);
        i++;
    }
 printf("value at cell[0][0] is %c", str[0][0]);
      printf("value at cell[0][1] is %c", str[0][1]);
        printf("value at cell[1][1] is %c", str[1][1]);
          printf("value at cell[1][2] is %c", str[1][2]);
    // scanf("%s", &str[j][i]);

    // printStr(str);
    // printf("Using printf %s\n", str);
    // printf("using puts: \n");
    // puts(str);
    return 0;
}
