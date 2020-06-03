#pragma GCC optimize("O3")

#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int t, n, i;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++)
            std::cin >> a[i];
        for (i = 0; i < n; i++)
            std::cin >> b[i];
        i = 0;
        for (int one = 0, minusOne = 0; i < n; i++)
        {
            if ((a[i] < b[i] && !one) || (a[i] > b[i] && !minusOne))
                break;
            if (a[i] == 1)
                one = 1;
            else if (a[i] == -1)
                minusOne = 1;
        }
        std::cout << (i == n ? "YES" : "NO") << std::endl;
    }
    return 0;
}