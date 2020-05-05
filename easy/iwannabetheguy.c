#include <stdio.h>

int main()
{
    int n, p, q, i;

    scanf("%i", &n);

    scanf("%i", &p);

    int x[p];
    for (i = 0; i < p; i++)
        scanf("%i", &x[i]);

    scanf("%i", &q);
    int y, j, distinct = 0;
    for (i = 0; i < q; i++)
    {
        scanf("%i", &y);
        distinct++;
        for (j = 0; j < p; j++)
        {
            if (x[j] == y)
            {
                distinct--;
                break;
            }
        }
    }
    if (distinct + p == n)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");

    return 0;
}