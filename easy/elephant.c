#include <stdio.h>

int main()
{
    int x, steps = 0, move = 5;
    scanf("%i", &x);
    while (x)
    {
        steps += (x / move);
        x %= move--;
    }
    printf("%i\n", steps);
    return 0;
}