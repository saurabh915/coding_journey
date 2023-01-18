// this is best amoung all sorting techniques
// this use partition technique
// TIME COMPLEXITY AV.CASE= O(nlogn) best case= O(nlogn)  worst case O(n^2)

#include <stdio.h>
int count=0;
void printArray(int *A, int n) // if we dont want to call array by refference we can also use syntax as ''''void printArray(int A[], int n)'''''
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int pivot = A[low]; // pivot is the first element of divided array
    int i = low + 1;    // i is moved next to pivot point
    int j = high;       // j is moved from high to lowest element
    int temp;

    do
    {
        while (A[i] <= pivot /* && i<high*/)
        {
           printf("from a[i]<pivot %d %d\n", i, A[i]);
            i++; //'i' is finding an element which is 'greater' than pivot point hence it is incrementing if the element
                 //  founded element is not greater. other wise as fouded element is greater than pivot it is moving
                 // that element to right of the array.
        }
        printf("while quit  'I' %d %d\n", i, A[i]);
        while (A[j] > pivot /*&& j>=low*/)
        {
            printf("from a[i]>a[j] %d %d\n", j, A[j]);
            j--; //'j' is finding an element which is 'less' than pivot point hence it is decrementing if te element
                 //  founded element is not lesser.other wise as fouded element is less than pivot it is moving
                 // that element to left of the array.
        }
        printf("while quit  'j' %d %d\n", j, A[j]);
        printf("pivot= %d\n", pivot);
        if (i < j) // the founded elements location indices sould not over crossed thats why if statement is used
        {          // if they are over crossed then the loop terminates and below swapping is not done and goes for pivot swapping.
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low]; // why not swapped as pivot point ?---> we dont use pivot to swap as pivot is variable so it
                   // dozent change pivot value at '''array''' pivot value should be changed in array which we are using.
        if (A[low]< A[j])
        {
            count++;
        }
    A[low] = A[j]; // swapped with j.... as j is smaller than element founded at i. and smaller elements should be placed
                   // at left size of array.
    A[j] = temp;
    printArray(A, high);
    return j; //// j is returned by this function which is used for  high value in another divided array or starting value of divided right array.
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
      
        quickSort(A, low, partitionIndex - 1);  // sort left subarray
          printArray(A, high);
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{

    int A[] = {3,1,2}; // try for  77,99,85,44,33,22,100 or 77,11,22,33,44,55,66

    int n;
    n = 3;
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    printf("\n%d",count);
    return 0;
}
