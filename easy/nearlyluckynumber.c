#include <stdio.h>

int main()
{
    long long n;
    int count = 0;
    scanf("%lld", &n);
    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
            count++;
        n /= 10;
    }
    if (count == 4 || count == 7)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}