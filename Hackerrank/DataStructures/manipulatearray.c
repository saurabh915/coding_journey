#include <stdio.h>
int main()
{
    int len, no;
    int a, b, k;
    // printf("enter the lenth of array\n");
    scanf("%d", &len);
    int array[10000000];
    for (int i = 0; i <= len+1; i++)
    {
        array[i] = 0;
    }

    array[0] = 1;
    // printf("enter thr number of operation do u want to perform\n");
    scanf("%d", &no);
    for (int i = 0; i < no; i++)
    {
        // printf("enter the a b k \n");
        scanf("%d %d %d", &a, &b, &k);
        for (int j = a; j <= b; j++)

        {
            array[j] = array[j] + k;
        }
        // for (int i = 1; i <= len; i++)
        // {
        //     printf("%d  ", array[i]);
        // }
    }
    int max = array[1];
    // for (int i = 1; i <= len; i++)
    // {
    //     printf("%d  ", array[i]);
    // }

    for (int i = 2; i <= len+1; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("%d", max);
}