#include <stdio.h>
int main()
{
    //in selection sort all elements are compared and smallest element is placed at initial position here exact small no. is selected and kept at exact position
    //but in insertion sort initially two elements are compared smallest no. is kept at initial position remaining are shifted to right 
    // store the 'index number' of array of minimum number and paste it to the i position.
    // it is exactly opposite to bubble sort.
    // speciality of this algorithm is to store the position of smallest number which we have to swap with i value.
    int min;
    int array[7] = {9, 5, 4, 7, 2, 15, 17};
    for (int i = 0; i < 7; i++)
    {
        min = i;
        for (int j = i + 1; j < 7; j++) //  here 'j' is 'i+1' to prevent comparing same element with itself. when value of i is changed it will also follow the procedure perfectly.

        {
            if (array[min] > array[j]) // as we assigned arrays first element as minimum value it will be compared with next element of array
                                       // if  this element which is assigned minimum is greater than the next element which is j now will be
            {                          //.
                                       //.
                min = j;               //   assigned as "min"
                                       // it is same as finding maximum number from array;
            }

        } // after comparing  all the  elements in array and confirming minimum element for position i it will swap with
          // element at position j "as the position of that minimum element is stored, is at  j which is stored in 'min'"
          // we can access that element at position j and swap it with position i.
        int temp;
        temp = array[i];
        array[i] = array[min];
        array[min] = temp; // here in array [min] position of smallest number is stored.
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d,", array[i]);
    }

    return 0;
}
