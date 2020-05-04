#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);
    int friend[n + 1];
    int j;

    int i;
    for (i = 1; i <= n; i++)
    {
        scanf("%i", &j);
        friend[j] = i;
    }

    for (i = 1; i <= n; i++)
        printf("%i ", friend[i]);
    printf("\n");

    return 0;
}