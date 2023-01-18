// #include <stdio.h>

// int sum(int arr[])
// {
//     int sum_of_array = 0;
//     for (int i = 0; i < 4; ++i)
//     {
//         sum_of_array += arr[i];
//     }
//     return sum_of_array;
// }

// int main()
// {int i;
// printf("enter the columns you want");
// scanf("%d",&i);
//     int result, array[i];
//     scanf("%d",&array);
//     result = sum(array);
//     printf("Result = %d", result);
//     return 0;
// }
#include<stdio.h>
#include<string.h>

int sum(int arr[]) {
int sum_of_array=0;
for (int i = 0; i<4; ++i) {
sum_of_array += arr[i]; 
}
return sum_of_array; 
}  


int main() {
    int i;
    printf("enter the number");
scanf("%d",&i);   
int result, array[i];   
scanf("%d",&array);
     
printf("Result = %d", array);   
return 0;
} 