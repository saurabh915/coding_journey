//time and space complexities are O(n^2) and O(1) resp.
//in bubblesort swapping is done as loop moves towards right side of array and if the element on right side is greater than the left side element just swap it
// bubble sort is exactly opposite to selection sort in bubble sort largest number is sorted to last index of array.
// it is done by  moving biggest number to the last and not include that index number of array element again.
// differece between bouble sort and selection sort is that it does not store minimum value or position of any arrry element
// sorting is done just done by swaaping the largest number to its postion.
#include <stdio.h>
int main()
{
    int array[8] = {5, 4, 1, 9, 7, 3, 2, 6};
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 8 - i; j++) // this is only important part in which position of large number is decided.  and 8-i is used to does not include stored element again
        {
            if (array[j] > array[j + 1]) // if condition takes place as false statement then element is leaved as it is and j is incremented and compared with next element.
            {
                int temp = array[j]; // by this number swapping largest number is moved to its position.
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d,", array[i]);
    }
}