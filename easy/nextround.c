#include <stdio.h>

int main()
{
    int n, k;
    scanf("%i %i", &n, &k);
    int scores[n];
    int i;
    for (i = 0; i < n; i++)
        scanf("%i", &scores[i]);

    if (scores[k - 1])
    {
        for (i = k; i < n; i++)
        {
            if (scores[i] != scores[k - 1])
                break;
        }
    }
    else
    {
        for (i = k - 2; i >= 0; i--)
        {
            if (scores[i])
                break;
        }
        i++;
    }
    printf("%i\n", i);
    return 0;
}