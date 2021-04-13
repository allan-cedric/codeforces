#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    scanf("%i\n", &t);
    while (t--)
    {
        scanf("%i %i\n", &n, &k);
        int mult_k = ((n / k) + (n % k != 0)) * k;
        printf("%i\n", (mult_k / n) + (mult_k % n != 0));
    }
    return 0;
}