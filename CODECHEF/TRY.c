#include <stdio.h>
int main()
{
    int cases, n;

    scanf("%d", &cases);
    n = cases;
    int services[cases];

    for (int i = 0; i < cases; i++)
    {
        /* code */
        int a;
        scanf("%d", &a);
        services[i] = a / 2;
        services[i] = services[i] + 1;

        if (i == cases - 1)
        {
            for (int i = 0; i < n; i++)
            {

                printf("%d\n", services[i]);
            }
        }
    }

    return 0;
}