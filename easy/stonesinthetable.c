#include <stdio.h>

int main()
{
    int num_stones, i, count = 1;

    scanf("%i", &num_stones);
    getchar();

    char ant_ch;
    char ch = getchar();
    for (i = 0; i < num_stones - 1; i++)
    {
        ant_ch = ch;
        ch = getchar();
        if (ant_ch != ch)
            count++;
    }

    printf("%i\n", num_stones - count);
    return 0;
}