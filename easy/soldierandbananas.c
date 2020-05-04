#include <stdio.h>

int main()
{
    int k, n, w;
    scanf("%i %i %i", &k, &n, &w);
    int amount = (w * (k + w * k) / 2) - n;
    if (amount >= 0)
        printf("%i\n", amount);
    else
        printf("0\n");
    return 0;
}