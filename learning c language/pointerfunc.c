#include <stdio.h>
void display(int *ptr)
{
    printf("%d\n", *ptr);
    printf("%d\n", *ptr+1);
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int i=0;
    // for (int i = 0; i < 4; i++)
    
        display(&arr[i]);
    
    return 0;
}