#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse4")

#include <stdio.h>

int main()
{
    int t, n, m;
    scanf("%i", &t);
    while (t--)
    {
        scanf(" %i %i", &n, &m);
        printf("%i\n", (n * m) / 2 + (n * m) % 2);
    }
    return 0;
}