#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the value of a\n ");
    scanf("%d", &a);
    printf("enter the value of b\n");
    scanf("%d", &b);
    printf("value of a and b before swapping is %d and %d\n", a, b);
    c = a;
direction:
    if (a <= b)
    {
        a++;
        goto direction;
    }
    else
    {
    direct:
        if (a >= b)
        {
            a--;
            goto direct;
        }
    }
    a++;
    printf("value of a is %d  ", a);
up:
    if (b <= c)
    {
        b++;
        goto up;
    }
varti:
    if (b >= c)

    {
        b--;
        goto varti;
    }
    b++;
    printf("value of b is %d\n", b);
    printf("value of a and b is %d and %d",a , b);
}