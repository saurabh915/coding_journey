#include <stdio.h>
int max(int, int, int, int);
int main()
{

    int a, b, c, d, big;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    big = max(a, b, c, d);
    printf("%d", big);
}
int max(int a, int b, int c, int d)
{
    int maxi;
    int maxi2;
    if (a > b)
    {
        maxi = a;
    }
    else
    {
        maxi = b;
    }
    if (d > c)
    {
        maxi2 = d;
    }
    else
    {
        maxi2 = c;
    }
    if (maxi > maxi2)
    {
        return maxi;
    }
    else
    {
        return maxi2;
    }
}