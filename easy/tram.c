#include <stdio.h>

int main()
{
    int stops, a, b;
    int min_capacity = 0, sum = 0;
    scanf("%i", &stops);
    scanf("%i %i", &a, &b);
    int i;
    for (i = 0; i < stops - 1; i++)
    {
        sum += (b - a);
        if (sum > min_capacity)
            min_capacity = sum;
        scanf("%i %i", &a, &b);
    }
    printf("%i\n", min_capacity);

    return 0;
}