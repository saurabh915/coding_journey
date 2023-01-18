// C program to store temperature of two cities of a week and display it.
#include <stdio.h>
const int roll_no = 2;
const int project= 2;
int main()
{
  int array[roll_no][project];

  // Using nested loop to store values in a 2d array
  for (int i = 0; i < roll_no; i++)
  {
    for (int j = 0; j < project; j++)
    {
      printf("roll number %d , projectnumber %d \n ", i + 1,j+1);
      scanf("%s", &array[i][j]);
    }
  }
  printf("\nDisplaying values: \n\n");

  // Using nested loop to display vlues of a 2d array
  for (int i = 0; i < roll_no; i++)
  {
    for (int j = 0; j < project; j++)
    {
      printf("roll number %d, project number %d = %s\n", i + 1, j + 1, array[i][j]);
    }
  }
  return 0;
}