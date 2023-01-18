#include <stdio.h>
int main()
{
    int try[8] = {5, 4, 1, 9, 7, 3, 2, 6};

    for (int i = 1; i < 8; i++)
    {
        int saved;
       saved=try[i];
        int j = i - 1;
        while (j >= 0 && try[j] > saved)
        {
            try[j + 1] = try[j];
            j = j - 1;
        }
        try[j + 1] = saved;
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", try[i]);
    }
}