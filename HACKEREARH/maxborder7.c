#include <stdio.h>
int main()
{
    int rows, columns;
    char cell[rows][columns];
    printf("enter the number of rows and column you want:");
    scanf(" %d ", &rows);
    scanf("%d", &columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%s", &cell[i][0]);
        }
    }

    // measuring number of borders//////////////////////////////
    int y = 0;
    int l = 0;
here:
    if (y < rows)
    {
        for (int x = 0; x < columns; x++)
        {
            if (y == 0 || cell[y - 1][x] == '.')
            {
                if (cell[y][x] == '#' && cell[y][x + 1] == '.')
                {
                    l++;
                    continue;
                }
                else
                {
                    if (x == columns - 1)
                    {
                        if (cell[y][x] == '.')
                        {
                            x == 0;
                            y++;

                            goto here;
                        }
                        else
                        {
                            l++;
                            x == 0;
                            y++;

                            goto here;
                        }
                    }
                }
            }
            else
            {
                continue;
            }
        }
    }
}