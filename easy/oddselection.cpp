#pragma GCC optimize("O3")

#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int t, n, x, odd, even;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n >> x;
        odd = even = 0;
        for (int a, i = 0; i < n; i++)
        {
            std::cin >> a;
            odd += (a % 2);
        }
        even = n - odd;
        if (!odd || (!even && !(x % 2)))
            std::cout << "No" << std::endl;
        else
        {
            if (!(x % 2))
            {
                even--;
                x--;
            }
            if (odd >= x)
                std::cout << "Yes" << std::endl;
            else
            {
                x -= (odd - !(odd % 2));
                std::cout << (even >= x ? "Yes" : "No") << std::endl;
            }
        }
    }
    return 0;
}