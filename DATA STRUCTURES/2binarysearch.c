//time complexity is O(logn) >(better)O(n)

#include <stdio.h>
int main()
{
    int a;
    int array[50] = {1, 12, 14, 18, 66};
    printf("enter the number you want to find out:");
    scanf("%d", &a);
    int mid = 5 / 2;

here:
    if (array[mid] == a)
    {
        printf("your number is found at location %d", mid);
    }
    else
    {
        if (array[mid] < a)
        {
            mid = mid + 5 / 2;
            goto here;
        }
        else
        {
            mid = mid / 2;
            goto here;
        }
    }

    return 0;
}