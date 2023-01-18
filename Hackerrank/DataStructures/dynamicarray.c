#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int N, Q, seq, lastAns = 0, x, y;
    scanf("%i %i", &N, &Q);

    int **s = calloc(100000, sizeof(int *));
    for (int i = 0; i < N; i++)
        s[i] = calloc(5, sizeof(int));

    int *count = calloc(100000, sizeof(int));

    for (int i = 0; i < Q; i++)
    {
        scanf("%i %i %i", &seq, &x, &y);
        int seqN = (x ^ lastAns) % N;
        if (seq == 1)
        {
            s[seqN][count[seqN]] = y;
            count[seqN]++;
        }
        else if (seq == 2)
        {
            lastAns = s[seqN][y % count[seqN]];
            printf("%i\n", lastAns);
        }
    }
    free(s);
    free(count);
    return 0;
}