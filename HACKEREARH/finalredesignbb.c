#include <stdio.h>

int r;
int c;

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
int returnmax4(int arra[], int q)
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
    int B;
    
    

    scanf("%d", &B);

    int duplicate[B];
    for (int I = 0; I < B; I++)
    {

        int t = 0;

        scanf("%d %d", &r, &c);
        char cell[r][c];

        for (int j = 0; j < r; j++)
        {

            scanf("%s", &cell[j][0]);
        }
        int y = 0;
        int l = 0;

    here:
        if (y < r)
        {
            for (int x = 0; x < c; x++)
            {
                if (y == 0 || cell[y - 1][x] == '.')
                {
                    /* code */

                    if (x == c - 1)
                    {
                        l++;
                        x = c;
                        y++;
                        goto here;
                    }

                    else
                    {
                        if (cell[y][x] == '.')
                        {
                            l++;
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
                                    goto here;
                                }

                                l++;
                                x++;
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
                                        goto here;
                                    }
                                  if( y!=0)
                                  {
                                    l++;
                                    x++;

                                    continue;
                                  }
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

        int stor[l];

        for (int m = 0; m < r; m++)
        {
            int k = 0;

            for (int n = 0; n < c; n++)
            {
                if (m == 0 || cell[m - 1][n] == '.')
                {

                    if (cell[m][n] == '#')
                    {

                        k++;
                        if (n == c - 1)
                        {
                            if (t <= l)
                            {
                                stor[t] = k;

                                t++;
                                k = 0;
                                continue;
                            }
                        }

                        continue;
                    }
                    else
                    {
                        if (t <= l)
                        {
                            stor[t] = k;

                            t++;
                            k = 0;
                            continue;
                        }
                    }
                }
                else
                {
                    if (k > 0)
                    {

                        if (t <= l)
                        {
                            stor[t] = k;

                            t++;
                            k = 0;
                            continue;
                        }

                        continue;
                    }
                }
            }
        }

        int x = 0;
        int z = 0;
    there:
        if (x < c)
        {
            for (int y = 0; y < r; y++)
            {
                if (x == 0 || cell[y][x - 1] == '.')
                {

                    if (y == r - 1)
                    {
                        z++;
                        y = r;
                        x++;
                        goto there;
                    }

                    else
                    {
                        if (cell[y][x] == '.')
                        {
                            z++;
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
                                    goto there;
                                }

                                z++;
                                y++;
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
                                            goto there;
                                        }

                                        z++;
                                        y++;

                                        continue;
                                    }
                                }

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

        int store[z];
        int u = 0;

        for (int n = 0; n < c; n++)
        {
            int e = 0;

            for (int m = 0; m < r; m++)
            {
                if (n == 0 || cell[m][n - 1] == '.')
                {

                    if (cell[m][n] == '#')
                    {

                        e++;
                        if (m == r - 1)
                        {
                            if (u <= z)
                            {
                                store[u] = e;

                                u++;
                                e = 0;
                                continue;
                            }
                        }

                        continue;
                    }
                    else
                    {

                        if (u <= z)
                        {
                            store[u] = e;

                            u++;
                            e = 0;
                            continue;
                        }
                    }
                }
                else
                {
                    if (e > 0)
                    {
                        if (u <= z)
                        {
                            store[u] = e;

                            u++;
                            e = 0;
                            continue;
                        }

                        continue;
                    }
                }
            }
        }

        int A = r - 1;
        int v = 0;
    next:
        if (A >= 0)
        {
            for (int x = c - 1; x >= 0; x--)
            {
                if (A == r - 1 || cell[A + 1][x] == '.')
                {

                    if (x == 0)
                    {
                        v++;

                        x = c - 1;
                        A--;
                        goto next;
                    }

                    else
                    {
                        if (cell[A][x] == '.')
                        {
                            v++;
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
                                    goto next;
                                }

                                v++;
                                x--;
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
                                        goto next;
                                    }

                                    v++;
                                    x--;

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

                        g++; // after cheaking this it should go for incrementing n;
                        if (n == 0)
                        {
                            if (f <= v)
                            {
                                store2[f] = g;

                                f++;
                                g = 0;
                                continue;
                            }
                        }

                        continue;
                    }
                    else
                    {
                        if (f <= v)
                        {
                            store2[f] = g;

                            f++;
                            g = 0;
                            continue;
                        }
                    }
                }
                else
                {
                    if (g > 0)
                    {
                        if (f <= v)
                        {
                            store2[f] = g;

                            f++;
                            g = 0;
                            continue;
                        }

                        continue;
                    }
                }
            }
        }

        int h = c - 1;
        int p = 0;
    hell:

        if (h >= 0)
        {
            for (int y = r - 1; y >= 0; y--)
            {
                if (h == c - 1 || cell[y][h + 1] == '.')
                {

                    if (y == 0)
                    {
                        p++;
                        y = 0;
                        h--;
                        goto hell;
                    }

                    else
                    {
                        if (cell[y][h] == '.')
                        {
                            p++;
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
                                    goto hell;
                                }

                                p++;
                                y--;
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
                                            goto hell;
                                        }

                                        p++;
                                        y--;

                                        continue;
                                    }
                                }

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

        int storage[p];
        int o = 0;

        for (int n = c - 1; n >= 0; n--)
        {
            int w = 0;

            for (int m = r - 1; m >= 0; m--)
            {
                if (n == c - 1 || cell[m][n + 1] == '.')
                {

                    if (cell[m][n] == '#')
                    {

                        w++;
                        if (m == 0)
                        {
                            if (o <= p)
                            {
                                storage[o] = w;

                                o++;
                                w = 0;
                                continue;
                            }
                        }

                        continue;
                    }
                    else
                    {

                        if (o <= p)
                        {
                            storage[o] = w;

                            o++;
                            w = 0;
                            continue;
                        }
                    }
                }
                else
                {
                    if (w > 0)
                    {
                        if (o <= p)
                        {
                            storage[o] = w;

                            o++;
                            w = 0;
                            continue;
                        }

                        continue;
                    }
                }
            }
        }

        int max = returnmax(stor, l);
        int max2 = returnmax2(store, z);
        int max3 = returnmax3(store2, v);
        int max4 = returnmax4(storage, p);

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

        duplicate[I] = maximum[I];
    }
    for (int i = 0; i < B; i++)
    {
        printf("\n");
        printf("%d", duplicate[i]);
    }

    return 0;
}