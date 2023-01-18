#include <stdio.h>
int main()
{
    int n;
    int p;

    scanf("%d", &n);
     scanf("%d", &p);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[p]);
        p = (p + 1) % n;
    }
}