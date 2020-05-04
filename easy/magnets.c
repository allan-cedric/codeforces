#include <stdio.h>

int main()
{
    int n, magnet, ant_magnet, groups = 1;
    scanf("%i", &n);

    scanf("%i", &magnet);
    while (--n)
    {
        ant_magnet = magnet;
        scanf("%i", &magnet);
        if (magnet != ant_magnet)
            groups++;
    }
    printf("%i\n", groups);
    return 0;
}