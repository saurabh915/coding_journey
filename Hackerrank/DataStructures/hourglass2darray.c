<<<<<<< HEAD
=======
//in this problem we have given an 2d array and we have to add the numbers representing every possible hour glass and hour glass is 
//  1  2  2
//  *  3  *
//  3  4  6
// and then find biggest amoung them 
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
#include <stdio.h>
int main()
{
   
    int addition[16];
    int add = 0;
    int a[36][36];
    printf("enter the two dimentional array ");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 6; i++)

    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
     int g = 0;

    for (int l = 0; l < 4; l++)
    {
        for (int i = 0; i < 4; i++)
        {
            int k = i + 3;
            for (int j = i; j < k; j++)
            {
                add = add + a[l][j];
                add = add + a[l + 2][j];
                if (j == i + 1)
                {
                    add = add + a[l + 1][j];
                }
            }
            // printf("%d\n", add);
            addition[g] = add;
            g++;
            add = 0;
        }
    }
    int maximum= addition[0];
    for (int z= 0; z < 16; z++)
    {
    
        if (addition[z]>maximum)
        {
           maximum = addition[z];
        }
        
    }
    printf("maximum is %d",maximum);
}