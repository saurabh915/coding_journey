#include <stdio.h>
 
// Function to print contents of an array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
 
// Recursive function to reverse elements of a subarray formed
// by `arr[low, high]`
void reverse(int arr[], int low, int high)
{
    if (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

reverse(arr, low + 1, high - 1);
    }
    
}
 
int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    reverse(arr, 0, n - 1);
    print(arr, n);
 
    return 0;
}        