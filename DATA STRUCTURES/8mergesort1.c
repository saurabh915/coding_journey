//  main idea behind merge sort is to divide array from its mid continuously;
 //until low is less than high;
 //after that array is sorted from lastly divided array;



#include <stdio.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];        // new array is given for storing the array elements orderly.(this is not needed for the quick sort because there is partitioner )
    i = low;
    j = mid + 1;
    k = low;                        

    while (i <= mid && j <= high) // here 'i' is for one  left part of array 'mid'  && 'j' is right part of array  'mid'
    {
        if (A[i] < A[j])       // if left part of array element is smaller thanthe right part of array then the left part of 
                                       // array element is placed at first postion of new B array.(this 1st element will changed after merging array again)
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)    // when i or j is exceeded beyond their limits remaining array of other half (j or i) is continuously sorted.
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)   //restoring array from new array to previous array. 
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high)
    {
        mid = (low + high) /2;
        mergeSort(A, low, mid);     // this is most cruisial point of this program where 
                                           // all the aray is divided into a branch  type structure.
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);    //---->  after this the last branch is merged and continued upto root of this branches
    }                                 // merging will start from right side of array first 
}

int main()
{
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray(A, n);
    mergeSort(A, 0, 6);
    printArray(A, n);
    return 0;
}
