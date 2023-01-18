#include <stdio.h>
int y = 0;
int x=0;
int r;
int c;
int l = 0;
int l1 =0;
int returnmax(int array[], int m)
{

    int max = 0;
    for (int i = 0; i < m; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int returnmax2(int arra[], int n)
{

    int max1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arra[i] > max1)
        {
            max1 = arra[i];
        }
    }
    return max1;
}
int main()
{
    int t = 0;
    int stor[c];
    int stor2[r];
    printf("number of rows and columns you want:");
    scanf("%d %d", &r, &c);
    char cell[r][c];

    for (int j = 0; j < r; j++)
    {

        scanf("%s", &cell[j][0]);
    }

here:
    if (y < r)
    {
        printf("value of y is %d\n", y);
        for (int x = 0; x < c; x++)
        {
            if (x == c - 1)
            {
                l++;
                printf("value of l due to c-1 %d", l);
                y++;
                x = 0;
                goto here;
            }

            else
            {
                if (cell[y][x] == '.')
                {
                    l++;
                    printf("value of l due to [.] is %d\n", l);
                    continue;
                }
                else
                {
                    if (cell[y][x] == '#' && cell[y][x + 1] == '.')
                    {
                        if (x + 2 == c)
                        {
                            l++;
                            y++;
                            x = 0;
                            printf("value of l due to [#.] is %d\n", l);
                            goto here;
                        }

                        l++;
                        x++;
                        printf("value of l due to [#.] is %d\n", l);
                        continue;
                    }
                }
            }
        }
    }
    printf("\n");
    printf("value of l is %d", l);
    printf("\n");
    printf("\n");
    printf("%c", cell[0][0]);
    printf("%c", cell[0][1]);
    printf("%c", cell[0][2]);
    printf("%c\n", cell[0][3]);
    //  printf("%c",cell[0][4]);
    printf("%c", cell[1][0]);
    printf("%c", cell[1][1]);
    printf("%c", cell[1][2]);
    printf("%c\n", cell[1][3]);
    // printf("%c",cell[1][4]);
    printf("%c", cell[2][0]);
    printf("%c", cell[2][1]);
    printf("%c", cell[2][2]);
    printf("%c\n", cell[2][3]);
    //  printf("%c",cell[2][4]);
    printf("%c", cell[3][0]);
    printf("%c", cell[3][1]);
    printf("%c", cell[3][2]);
    printf("%c\n", cell[3][3]);

    for (int m = 0; m < r; m++)
    {
        int k = 0;

        for (int n = 0; n < c; n++)
        {

            if (cell[m][n] == '#')
            {
                if (m == 0)
                {

                    k++; //after cheaking this it should go for incrementing n;
                    if (n == c - 1)
                    {
                        printf("values of t is %d and l is %d", t, l);
                        if (t <= l)
                        {
                            stor[t] = k;

                            printf("value of k is %d\n", stor[t]);
                            t++;
                            k = 0;
                            continue;
                        }
                    }

                    continue;
                }
                else
                {
                    if (cell[m - 1][n] != '#')
                    {
                        k++; //after cheaking this it should go for incrementing n;
                        if (n == c - 1)
                        {
                            printf("values of t is %d and l is %d", t, l);
                            if (t <= l)
                            {
                                stor[t] = k;

                                printf("value of k is %d\n", stor[t]);
                                t++;
                                k = 0;
                                continue;
                            }
                        }
                        k++;
                        continue;
                    }
                }

               // k++; after cheaking this it should go for incrementing n;
                if (n == c - 1)
                {
                    printf("values of t is %d and l is %d", t, l);
                    if (t <= l)
                    {
                        stor[t] = k;

                        printf("value of k is %d\n", stor[t]);
                        t++;
                        k = 0;
                        continue;
                    }
                }

                continue;
                // }
            }
            else
            {
                printf("values of t is %d and l is %d", t, l);
                if (t <= l)
                {
                    stor[t] = k;

                    printf("value of k is %d\n", stor[t]);
                    t++;
                    k = 0;
                    continue;
                }
            }
            // if (t <= l)
            // {
            //   stor[t] = k;

            //   printf("value of k is- %d\n", stor[t]);
            //   t++;
            //   k = 0;
            //   continue;
            // }
        }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // next operation starts here.....

there:
    if (x < c)
    {
        printf("value of y is %d\n", x);
        for (int y = 0; y < r; y++)
        {
            if (y == r - 1)
            {
                l1++;
                printf("value of l due to c-1 %d", l1);
                x++;
                y = 0;
                goto there;
            }

            else
            {
                if (cell[y][x] == '.')
                {
                    l1++;
                    printf("value of l due to [.] is %d\n", l1);
                    continue;
                }
                else
                {
                    if (cell[y][x] == '#' && cell[y][x + 1] == '.')
                    {
                        if (y + 2 == r)
                        {
                            l1++;
                            x++;
                            y = 0;
                            printf("value of l due to [#.] is %d\n", l1);
                            goto there;
                        }

                        l1++;
                        y++;
                        printf("value of l due to [#.] is %d\n", l1);
                        continue;
                    }
                }
            }
        }
    }

    printf("\n");
    printf("value of l is %d", l);
    for (int n = 0; n < c; n++)
    {
        int k = 0;

        for (int m = 0; m < r; m++)
        {

            if (cell[m][n] == '#')
            {
                if (n == 0)
                {

                    k++; //after cheaking this it should go for incrementing n;
                    if (m == r - 1)
                    {
                        printf("values of t is %d and l is %d", t, l1);
                        if (t <= l1)
                        {
                            stor2[t] = k;

                            printf("value of k is %d\n", stor2[t]);
                            t++;
                            k = 0;
                            continue;
                        }
                    }

                    continue;
                }
                else
                {
                    if (cell[m - 1][n] != '#')
                    {
                        k++; //after cheaking this it should go for incrementing n;
                        if (m == r - 1)
                        {
                            printf("values of t is %d and l is %d", t, l1);
                            if (t <= l1)
                            {
                                stor2[t] = k;

                                printf("value of k is %d\n", stor2[t]);
                                t++;
                                k = 0;
                                continue;
                            }
                        }

                        continue;
                    }
                }

                k++; //after cheaking this it should go for incrementing n;
                if (m == r - 1)
                {
                    printf("values of t is %d and l is %d", t, l1);
                    if (t <= l1)
                    {
                        stor2[t] = k;

                        printf("value of k is %d\n", stor2[t]);
                        t++;
                        k = 0;
                        continue;
                    }
                }

                continue;
                // }
            }
            else
            {
                printf("values of t is %d and l is %d", t, l1);
                if (t <= l1)
                {
                    stor2[t] = k;

                    printf("value of k is %d\n", stor2[t]);
                    t++;
                    k = 0;
                    continue;
                }
            }
            // if (t <= l)
            // {
            //   stor[t] = k;

            //   printf("value of k is- %d\n", stor[t]);
            //   t++;
            //   k = 0;
            //   continue;
            // }
        }
    }
    int max = returnmax(stor, l);
    int max2 = returnmax2(stor2,l1);
    if (max>max2)
    {
        printf("maximum border is of length %d",max);
    }
    else
    {
        printf("maximum borderis of length %d", max2);
    }
    
    
    
    return 0;
}
