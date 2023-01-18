#include <stdio.h>
int main()
{
    int no;

    scanf("%d", &no);
    if (no % 5 == 0 && no % 11 == 0)
    {
        printf("BOTH");
    }
    else
    {
        if (no % 5 == 0 || no % 11 == 0)
        {
            printf("ONE");
        }
        else
        {
            printf("NONE");
        }
    }

    return 0;
}