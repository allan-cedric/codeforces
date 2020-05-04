#include <stdio.h>

int main()
{
    int n, k;
    scanf("%i %i", &n, &k);
    while (k--)
    {
        if (!(n % 10))
            n /= 10;
        else
            n--;
    }
    printf("%i\n", n);
    return 0;
}