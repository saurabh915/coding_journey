#include <stdio.h>

int r;
int c;

// void laststep(int last[], int big, int B, int P)
// {
//     if (P < B)
//     {
//         last[P] = big;
//     }
// }

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
int returnmax3(int array[], int m)
{

    int max3 = 0;
    for (int i = 0; i < m; i++)
    {
        if (array[i] > max3)
        {
            max3 = array[i];
        }
    }
    return max3;
}
int returnmax4(int arra[], int q)
{

    int max4 = 0;
    for (int i = 0; i < q; i++)
    {
        if (arra[i] > max4)
        {
            max4 = arra[i];
        }
    }
    return max4;
}

int main()
{

    int B;

    printf("enter the number of boxes you want:");
    scanf("%d", &B);

    int duplicate[B];
    for (int I = 0; I < B; I++)
    {

        int max, max2, max3, max4;
        
        int t = 0;

        printf("number of rows and columns you want:");
        scanf("%d %d", &r, &c);
        char cell[r][c];

        for (int j = 0; j < r; j++)
        {

            scanf("%s", &cell[j][0]);
        }
        ////////////////////////////////   1st operation  /////////////////////////////////////////////////////////////
        int y = 0;
        int l = 0;
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
        // printf("%c", cell[0][0]);
        // printf("%c", cell[0][1]);
        // printf("%c", cell[0][2]);
        // printf("%c\n", cell[0][3]);
        // //  printf("%c",cell[0][4]);
        // printf("%c", cell[1][0]);
        // printf("%c", cell[1][1]);
        // printf("%c", cell[1][2]);
        // printf("%c\n", cell[1][3]);
        // // printf("%c",cell[1][4]);
        // printf("%c", cell[2][0]);
        // printf("%c", cell[2][1]);
        // printf("%c", cell[2][2]);
        // printf("%c\n", cell[2][3]);
        // //  printf("%c",cell[2][4]);
        // printf("%c", cell[3][0]);
        // printf("%c", cell[3][1]);
        // printf("%c", cell[3][2]);
        // printf("%c\n", cell[3][3]);
        int stor[l];
        int k = 0;
        for (int m = 0; m < r; m++)
        {

            for (int n = 0; n < c; n++)
            {
                if (m == 0 || cell[m - 1][n] == '.')
                {
                    /* code */

                    if (cell[m][n] == '#')
                    {

                        k++; // after cheaking this it should go for incrementing n;
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

        ////////////////////////////////////////////////////2nd operation/////////////////////////////////////////////////////
        // next operation starts here
        printf("\n");
        printf("\n");
        printf("\n");
        int x = 0;
        int z = 0;
    there:
        // printf("it is working");
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

                        e++; // after cheaking this it should go for incrementing n;
                        if (m == r - 1)
                        {
                            printf("values of u is %d and z is %d \n", u, z);
                            if (u <= z)
                            {
                                store[u] = e;
                                printf("value of n is %d\n", n);

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
                            printf("value of n is %d\n", n);
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
                            printf("value of n is %d\n", n);
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

        // operation successful//////////////////////////////////////3rd operation///////////////////////////////////////////////////////////////

        printf("\n");
        printf("\n");
        printf("\n");
        int A = r - 1;
        int v = 0;
    next:
        if (A >= 0)
        {
            printf("value of y is %d\n", A);
            for (int x = c - 1; x >= 0; x--)
            {
                if (A == r - 1 || cell[A + 1][x] == '.')
                {
                    printf("value of x is %d\n", x);

                    if (x == 0)
                    {
                        v++;
                        printf("value of x is %d\n", x);
                        printf("value of v due to c-1 %d", v);
                        x = c - 1;
                        A--;
                        goto next;
                    }

                    else
                    {
                        if (cell[A][x] == '.')
                        {
                            v++;
                            printf("value of v due to [.] is %d\n", v);
                            continue;
                        }
                        else
                        {
                            if (cell[A][x] == '#' && cell[A][x - 1] == '.')
                            {
                                if (x - 1 == 0)
                                {
                                    v++;
                                    x = 0;
                                    A--;
                                    printf("value of v due to [#. in col.] is %d\n", v);
                                    goto next;
                                }

                                v++;
                                x--;
                                printf("value of v due to [#. at cen.] is %d\n", v);
                                continue;
                            }
                            else
                            {
                                if (cell[A + 1][x - 1] == '#' && cell[A][x] == '#')
                                {
                                    if (x == 2)
                                    {
                                        v++;
                                        x--;
                                        A--;
                                        printf("value of v due to (column) [##c] is %d\n", v);
                                        goto next;
                                    }

                                    v++;
                                    x--;

                                    printf("value of v due to [###..] is %d\n", v);
                                    continue;
                                }

                                continue;
                            }
                        }
                    }
                }

                else
                {
                    if (x == 0)
                    {
                        A--;
                        goto next;
                    }
                    continue;
                }
            }
        }
        printf("\n");
        printf("value of v is %d", v);

        // printf("is this program is working\n");

        int store2[v];
        int f = 0;

        for (int m = r - 1; m >= 0; m--)
        {
            int g = 0;

            for (int n = c - 1; n >= 0; n--)
            {
                if (m == r - 1 || cell[m + 1][n] == '.')
                {
                    /* code */

                    if (cell[m][n] == '#')
                    {

                        // printf("is this program is working2\n");
                        g++; // after cheaking this it should go for incrementing n;
                        if (n == 0)
                        {
                            printf("values of f is %d and v is %d\n", f, v);
                            if (f <= v)
                            {
                                store2[f] = g;

                                printf("value of g is %d\n", store2[f]);
                                f++;
                                g = 0;
                                continue;
                            }
                        }

                        continue;
                        // }
                    }
                    else
                    {
                        printf("values of f is %d and v is %d\n", f, v);
                        if (f <= v)
                        {
                            store2[f] = g;

                            printf("value of k is %d\n", store2[f]);
                            f++;
                            g = 0;
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
                    if (g > 0)
                    {
                        printf("values of f is %d and v is %d\n", f, v);
                        if (f <= v)
                        {
                            store2[f] = g;

                            printf("value of g is %d\n", store2[f]);
                            f++;
                            g = 0;
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
        /////////////////////////////////////////////////////////////4th operation///////////////////////////////////////////////////////////

        printf("\n");
        printf("\n");
        printf("\n");
        int h = c - 1;
        int p = 0;
    hell:
        // printf("it is working");
        if (h >= 0)
        {
            printf("value of x is %d\n", h);
            for (int y = r - 1; y >= 0; y--)
            {
                if (h == c - 1 || cell[y][h + 1] == '.')
                {
                    /* code */

                    if (y == 0)
                    {
                        p++;
                        printf("value of p due to c-1 %d\n", p);
                        y = 0;
                        h--;
                        goto hell;
                    }

                    else
                    {
                        if (cell[y][h] == '.')
                        {
                            p++;
                            printf("value of p due to [.] is %d\n", p);
                            continue;
                        }
                        else
                        {
                            if (cell[y][h] == '#' && cell[y - 1][h] == '.')
                            {
                                if (y - 1 == 0)
                                {
                                    p++;
                                    y = 0;
                                    h--;
                                    printf("value of p due to [#.] at col. is %d\n", p);
                                    goto hell;
                                }

                                p++;
                                y--;
                                printf("value of p due to [#.] at cent. is %d\n", p);
                                continue;
                            }
                            else
                            {
                                if (h != r - 1)
                                {
                                    if (cell[y - 1][h + 1] == '#' && cell[y][h] == '#')
                                    {
                                        if (y - 1 == 0)
                                        {
                                            p++;
                                            y--;
                                            h--;
                                            printf("value of p due to (column) [#.] is %d\n", p);
                                            goto hell;
                                        }

                                        p++;
                                        y--;

                                        printf("value of p due to [###.] is %d\n", p);
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
                    if (y == 0)
                    {
                        h--;
                        goto hell;
                    }
                    continue;
                }
            }
        }
        printf("\n");
        printf("value of p is %d\n", p);

        int storage[p];
        int o = 0;

        for (int n = c - 1; n >= 0; n--)
        {
            int w = 0;

            for (int m = r - 1; m >= 0; m--)
            {
                if (n == c - 1 || cell[m][n + 1] == '.')
                {
                    /* code */

                    if (cell[m][n] == '#')
                    {

                        w++; // after cheaking this it should go for incrementing n;
                        if (m == 0)
                        {
                            printf("values of o is %d and p is %d \n", o, p);
                            if (o <= p)
                            {
                                storage[o] = w;
                                printf("value of n is %d\n", n);

                                printf("value of w due to [r-1] is %d\n", storage[o]);

                                o++;
                                w = 0;
                                continue;
                            }
                        }

                        continue;
                        // }
                    }
                    else
                    {

                        printf("values of o is %d and p is %d\n", o, p);
                        if (o <= p)
                        {
                            storage[o] = w;
                            printf("value of n is %d\n", n);
                            printf("value of w due to '.' is %d\n", storage[o]);

                            o++;
                            w = 0;
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
                    if (w > 0)
                    {
                        printf("values of o is %d and p is %d\n", o, p);
                        if (o <= p)
                        {
                            storage[o] = w;
                            printf("value of n is %d\n", n);
                            printf("value of w due to  ###.. is %d\n", storage[o]);
                            o++;
                            w = 0;
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

        max = returnmax(stor, l);
        printf("value of max is %d", max);
        max2 = returnmax2(store, z);
        printf("value of max2 is %d", max2);
        max3 = returnmax3(store2, v);
        printf("value of max3 is %d", max3);
        max4 = returnmax4(storage, p);
        printf("value of max4 is %d", max4);
        // if (max > max2)
        // {
        //     printf("maximum borderis of length %d\n", max);
        // }
        // else
        // {
        //     printf("maximum border is of length %d\n", max2);
        // }
        int maxi[4] = {max, max2, max3, max4};
        int maximum[B];
        maximum[I] = 0;

        for (int i = 0; i < 3; i++)
        {
            if (maxi[i] > maximum[I])
            {
                maximum[I] = maxi[i];
            }
        }

        printf("maximum border is of length %d", maximum[I]);
        duplicate[I] = maximum[I];
    }
    for (int i = 0; i < B; i++)
    {
        printf("\n");
        printf("%d", duplicate[i]);
    }

    return 0;
}