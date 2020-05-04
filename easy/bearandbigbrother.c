#include <stdio.h>

int main()
{
    int a, b, years = 0;
    scanf("%i %i", &a, &b);
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        years++;
    }
    printf("%i\n", years);

    return 0;
}