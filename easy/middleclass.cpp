#pragma GCC optimize("O3")

#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int t, n, x;
    uint64_t sum;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n >> x;
        sum = 0;
        int savings[n];
        for (int i = 0; i < n; sum += savings[i], i++)
            std::cin >> savings[i];
        std::sort(savings, savings + n);
        for (int i = 0, size = n; i < size && (sum / n < x); i++, n--)
            sum -= savings[i];
        std::cout << n << std::endl;
    }
    return 0;
}