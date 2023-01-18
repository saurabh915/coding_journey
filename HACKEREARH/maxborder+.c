#include <stdio.h>
int y = 0;

int r;
int c;
int l = 0;

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

int returnmax2(int arra[], int q)
{

    int max2 = 0;
    for (int i = 0; i < q; i++)
    {
        if (arra[i] > max2)
        {
            max2 = arra[i];
        }
    }
    return max2;
}
int main()
{
    int t = 0;

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
            if (y == 0 || cell[y - 1][x] == '.')
            {
                /* code */

                if (x == c - 1)
                {
                    l++;
                    printf("value of l due to c-1 %d", l);
                    x = c;
                    y++;
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
                                x = c;
                                y++;
                                printf("value of l due to [#. in col.] is %d\n", l);
                                goto here;
                            }

                            l++;
                            x++;
                            printf("value of l due to [#. at cen.] is %d\n", l);
                            continue;
                        }
                        else
                        {
                            if (cell[y - 1][x + 1] == '#' && cell[y][x] == '#')
                            {
                                if (x == c - 2)
                                {
                                    l++;
                                    x++;
                                    y++;
                                    printf("value of l due to (column) [##c] is %d\n", l);
                                    goto here;
                                }

                                l++;
                                x++;

                                printf("value of l due to [###..] is %d\n", l);
                                continue;
                            }

                            continue;
                        }
                    }
                }
            }

            else
            {
                if (x == c - 1)
                {
                    y++;
                    goto here;
                }
                continue;
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
    int stor[l];

    for (int m = 0; m < r; m++)
    {
        int k = 0;

        for (int n = 0; n < c; n++)
        {
            if (m == 0 || cell[m - 1][n] == '.')
            {
                /* code */

                if (cell[m][n] == '#')
                {

                    k++; //after cheaking this it should go for incrementing n;
                    if (n == c - 1)
                    {
                        printf("values of t is %d and l is %d\n", t, l);
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
                    printf("values of t is %d and l is %d\n", t, l);
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
            else
            {
                if (k > 0)
                {
                    printf("values of t is %d and l is %d\n", t, l);
                    if (t <= l)
                    {
                        stor[t] = k;

                        printf("value of k is %d\n", stor[t]);
                        t++;
                        k = 0;
                        continue;
                    }
                    // if(n==c-1)
                    // {
                    //     m++;
                    //     goto here;
                    // }
                    continue;
                }
            }
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    // next operation starts here
    printf("\n");
    printf("\n");
    printf("\n");
    int x = 0;
    int z = 0;
there:
    printf("it is working");
    if (x < c)
    {
        printf("value of x is %d\n", x);
        for (int y = 0; y < r; y++)
        {
            if (x == 0 || cell[y][x - 1] == '.')
            {
                /* code */

                if (y == r - 1)
                {
                    z++;
                    printf("value of z due to c-1 %d\n", z);
                    y = r;
                    x++;
                    goto there;
                }

                else
                {
                    if (cell[y][x] == '.')
                    {
                        z++;
                        printf("value of z due to [.] is %d\n", z);
                        continue;
                    }
                    else
                    {
                        if (cell[y][x] == '#' && cell[y + 1][x] == '.')
                        {
                            if (y + 2 == r)
                            {
                                z++;
                                y = r;
                                x++;
                                printf("value of z due to [#.] at col. is %d\n", z);
                                goto there;
                            }

                            z++;
                            y++;
                            printf("value of z due to [#.] at cent. is %d\n", z);
                            continue;
                        }
                        else
                        {
                            if (x != 0)
                            {
                                if (cell[y + 1][x - 1] == '#' && cell[y][x] == '#')
                                {
                                    if (y == r - 2)
                                    {
                                        z++;
                                        y++;
                                        x++;
                                        printf("value of z due to (column) [#.] is %d\n", z);
                                        goto there;
                                    }

                                    z++;
                                    y++;

                                    printf("value of z due to [###.] is %d\n", z);
                                    continue;
                                }
                            }

                            //  y++;
                            continue;
                        }
                    }
                }
            }

            else
            {
                if (y == r - 1)
                {
                    x++;
                    goto there;
                }
                continue;
            }
        }
    }
    printf("\n");
    printf("value of z is %d\n", z);

    int store[z];
    int u = 0;

    for (int n = 0; n < c; n++)
    {
        int e = 0;

        for (int m = 0; m < r; m++)
        {
            if (n == 0 || cell[m][n - 1] == '.')
            {
                /* code */

                if (cell[m][n] == '#')
                {

                    e++; //after cheaking this it should go for incrementing n;
                    if (m == r - 1)
                    {
                        printf("values of u is %d and z is %d \n", u, z);
                        if (u <= z)
                        {
                            store[u] = e;

                            printf("value of e due to [r-1] is %d\n", store[u]);
                            u++;
                            e = 0;
                            continue;
                        }
                    }

                    continue;
                    // }
                }
                else
                {

                    printf("values of u is %d and z is %d\n", u, z);
                    if (u <= z)
                    {
                        store[u] = e;

                        printf("value of e due to '.' is %d\n", store[u]);
                        u++;
                        e = 0;
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
            else
            {
                if (e > 0)
                {
                    printf("values of u is %d and z is %d\n", u, z);
                    if (u <= z)
                    {
                        store[u] = e;

                        printf("value of e due to  ###.. is %d\n", store[u]);
                        u++;
                        e = 0;
                        continue;
                    }
                    // if(n==c-1)
                    // {
                    //     m++;
                    //     goto here;
                    // }
                    continue;
                }
            }
        }
    }

// operation successful/////////////////////////////////////////////////////////////////////////////////////////////////////

    int max = returnmax(stor, l);
    printf("value of max is %d", max);
    int max2 = returnmax2(store, z);
    printf("value of max2 is %d", max2);
    if (max > max2)
    {
        printf("maximum borderis of length %d\n", max);
    }
    else
    {
        printf("maximum border is of length %d\n", max2);
    }

    return 0;
}