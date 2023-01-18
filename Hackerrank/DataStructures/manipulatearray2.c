#include <stdio.h>
int main()
{
    int len, no;
    int a, b, k;
    scanf("%d", &len);
    int array[len + 1];
    for (int i = 0; i <= len; i++)
    {
        array[i] = 0;
    }
    scanf("%d", &no);
    for (int i = 0; i < no; i++)
    {
        scanf("%d %d %d", &a, &b, &k);
        for (int j = a; j <= b; j++)

        {
            array[j] = array[j] + k;
        }
       a=0; b=0;k=0;
    }
    int max = array[1];
   

    for (int i = 2; i <= len; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("%d", max);
}
