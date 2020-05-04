#include <stdio.h>

int main()
{
    int n, h;
    scanf("%i %i", &n, &h);
    int i, p, width = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%i", &p);
        if (p > h)
            width += 2;
        else
            width++;
    }
    printf("%i\n", width);
    return 0;
}