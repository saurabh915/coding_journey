// time complexity O(nlogn)  space complexity O(n)


/*the overall process here is first break down whole array into  peaces of two elements
and then make one as low and one as high and one as mid  and start comparing low sided elements with mid+1 sided elements 
 if first element of low sided element is smaller than first element which are on mid+1 side then move it on new array 
 then as element of smaller side is added to new array only low side is incremented and again checked with first elements of 
 mid+1 side when elements on low side found to be greater than element on low side then mid+1 sided element is stored in new array
 and that sided element is compared with all low sided elements and if all elements of one side are stored on new array 
 then remaing elements of remaining side are stored as they are and this process continued till top branch*/



#include <stdio.h>
void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void merge(int array[],int low, int mid,  int high)
{

    int i, j, k, B[100];   // new array is given for storing the array elements orderly.(this is not needed for the quick sort because there is partitioner )
    i = low;
    j = mid + 1;
    k = low;                       // here k is kept as low as low may be zero or one or two also.....

    while (i <= mid && j <= high)    // here 'i' is for one for left part of array 'mid'  && 'j' is right part of array  'mid'
    {
        if (array[i] < array[j])     // if left part of array element is smaller thanthe right part of array then the left part of 
                                       // array element is placed at first postion of new B array.(this 1st element will changed after merging array again)
        {
            B[k] = array[i];
            i++;
            k++;
        }
        else
        {
            B[k] = array[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = array[i]; // when i or j is exceeded beyond their limits remaining array of other half (j or i) is continuously sorted.
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = array[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        array[i] = B[i];                /*here is magical part where array is moved to upper branch of tree structure
                                              here whole array is not changed directly at first place it configure only 2
                                                elements one peace this configured 2 elements  this two elements of one pease 
                                                will act as a only one pease for upper branch*/
    }
    printf("%d %d %d\n",array[low] ,array[mid], array[high] );
    print(array,5);
}

void mergesort(int array[], int low, int high)
{
            

    if (low < high)
    {

        int mid;
        mid = (low + high) / 2;
        printf("during calling to mergesort1 %d %d %d\n",array[low] , array[mid], array[high] );

        mergesort(array, low, mid);                // this is most cruisial point of this program where 
        printf("during calling to mergesort2 %d %d \n",array[mid+1] ,  array[high] );
                                                     // all the aray is divided into a branch  type structure.
        mergesort(array, mid + 1, high);
                printf("during calling to merge %d %d %d \n",array[low] ,array[mid] ,  array[high] );

        merge(array, low, mid, high);   //---->  after this the last branch is merged and continued upto root of this branches
    }
}
int main()
{
    int array[5] = {3, 2, 1, 9, 5};
    print(array, 5);
    mergesort(array, 0, 4);   
    print(array, 5);
    return 0;
}