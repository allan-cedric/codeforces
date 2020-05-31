#pragma GCC optimize("O3")

#include <stdio.h>

int main()
{
    int t, n, m;
    scanf("%i", &t);
    while (t--)
    {
        scanf(" %i %i", &n, &m);
        printf("%i\n", (n * m + 1) / 2);
    }
    return 0;
}