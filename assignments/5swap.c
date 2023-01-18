#include <stdio.h>
int main()
{
    int a, b;

    printf("enter numbers\n");
    scanf("  %d  %d", &a, &b);
    printf("numbers before swapping %d , %d", a, b);
    printf(" numbers after swapping %d, %d", b, a);

    return 0;
}