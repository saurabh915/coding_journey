#include <stdio.h>
int y = 0;
int x=0;
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
int main()
{
    int t = 0;
    int stor[c];
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
                    x=c;
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
                                x=c;
                               y++;
                                printf("value of l due to [#.] is %d\n", l);
                               goto here;
                            
                            }

                            l++;
                            x++;
                            printf("value of l due to [#.] is %d\n", l);
                            continue;
                        }
                        else
                        {
                            if (cell[y-1][x+1]=='#' && cell[y][x]=='#')
                            {
                              if(x==c-2)  
                              {
                                    l++;
                                    x++;
                                    y++;
                                    printf("value of l due to (column) [#.] is %d\n", l);
                                    goto here;
                              }
                            
                             l++;
                              x++;
                              printf("value of l due to [###..] is %d\n", l);
                            }
                            
                        }
                        
                    }
                }
            }
           
            else
            {
                if(x==c-1)
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
            else
            {
                if(k>0)
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
                       // if(n==c-1)
                      // {
                     //     m++;
                      //     goto here;
                        // }
                       continue;
            }    }
            
        }
    }

 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // next operation starts here

there:
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
                    x=c;
                     y++;
                    goto there;
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
                                x=c;
                               y++;
                                printf("value of l due to [#.] is %d\n", l);
                               goto there;
                            
                            }

                            l++;
                            x++;
                            printf("value of l due to [#.] is %d\n", l);
                            continue;
                        }
                        else
                        {
                            if (cell[y-1][x+1]=='#' && cell[y][x]=='#')
                            {
                              if(x==c-2)  
                              {
                                    l++;
                                    x++;
                                    y++;
                                    printf("value of l due to (column) [#.] is %d\n", l);
                                    goto there;
                              }
                            
                             l++;
                              x++;
                              printf("value of l due to [###..] is %d\n", l);
                            }
                            
                        }
                        
                    }
                }
            }
           
            else
            {
                if(x==c-1)
                {
                    y++;
                    goto there;
            
                }
                continue;
                
                 
            }
            
        }
    }
    printf("\n");
    printf("value of l is %d", l);





    

    int max = returnmax(stor, l);
    printf("maximum borderis of length %d", max);
    return 0;
}