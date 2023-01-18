#include <stdio.h>
#include <string.h>
int main()
{
    int inputs, q, count = 0;
 
    char input[1000][1000];
    char queries[1000][1000];
    scanf("%d", &inputs);
    for (int k = 0; k < inputs; k++)
    {
        scanf("%s", &input[k][0]);
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {

        scanf("%s", &queries[i][0]);
    }

    for (int m = 0; m < q; m++)
    {
        for (int j = 0; j < inputs; j++)
        {

                       int value = strcmp(queries[m], input[j]);
            if (value == 0)
            {

                count++;
            }
        }

        printf("%d\n", count);
        count = 0;
    }
}