
// function to find out same letters in both functions 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int size;
    char array[256]="saurabh";
    char arr[256]="zzzzb";
    size=strcspn(arr,array);
    printf("the number of unmatched characters before matched character:%d",size);
    
}