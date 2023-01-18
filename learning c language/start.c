#include <stdio.h>
int main(void)
{
    int a, b, c, direction;
    printf(" enter the numbers\n");
    scanf("%d  %d", &a, &b);
    c = a + b;
    printf("\n a+b= %d ", c);


    direction:
    if (c < 5)
{
        printf("c is less than 5 \n");
c++;
printf("value of updated c is %d\n", c);
    goto direction;
}
    return 0;
}