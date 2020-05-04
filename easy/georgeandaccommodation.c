#include <stdio.h>

int main()
{
    int n, p, q, count = 0;
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%i %i", &p, &q);
        if (q - p >= 2)
            count++;
    }
    printf("%i\n", count);

    return 0;
}