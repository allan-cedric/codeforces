#include <stdio.h>

int main()
{
    int num_problems, solve, i, sum, count = 0;

    scanf("%i", &num_problems);
    while (0 < num_problems--)
    {
        sum = 0;
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &solve);
            sum += solve;
        }
        if (sum > 1)
            count++;
    }

    printf("%i\n", count);

    return 0;
}