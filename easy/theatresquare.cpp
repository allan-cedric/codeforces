#pragma GCC optimize("O3")
#include <bits/stdc++.h>

int main()
{
    uint64_t n, m, a;
    std::cin >> n >> m >> a;
    std::cout << ((n % a > 0) + n / a) * ((m % a > 0) + m / a) << std::endl;

    return 0;
}