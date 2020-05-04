#include <stdio.h>

int distinct_digits(int n);

int main()
{
    int year;
    scanf("%i", &year);
    while (!distinct_digits(++year)){}
    printf("%i\n", year);

    return 0;
}

int distinct_digits(int n)
{
    int digit[10];
    int i, count = 0;

    for (i = 0; i < 10; i++)
        digit[i] = 0;

    while (n)
    {
        if (digit[n % 10])
            break;
        digit[n % 10] = 1;
        count++;
        n /= 10;
    }
    if (count == 4)
        return 1;
    return 0;
}