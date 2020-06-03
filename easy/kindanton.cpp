#pragma GCC optimize("O3")

#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int t, n;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            std::cin >> a[i];
        for (int i = 0; i < n; i++)
            std::cin >> b[i];
        if (a[0] != b[0])
            std::cout << "NO" << std::endl;
        else
        {
            int i = n - 1, possibleChange;
            while (i)
            {
                possibleChange = 0;
                if (b[i] - a[i] > 0)
                {
                    for (int j = 0; j < i; j++)
                    {
                        if (a[j] > 0)
                        {
                            possibleChange = 1;
                            break;
                        }
                    }
                    if (!possibleChange)
                        break;
                }
                else if (b[i] - a[i] < 0)
                {
                    for (int j = 0; j < i; j++)
                    {
                        if (a[j] < 0)
                        {
                            possibleChange = 1;
                            break;
                        }
                    }
                    if (!possibleChange)
                        break;
                }
                i--;
            }
            std::cout << (!i ? "YES" : "NO") << std::endl;
        }
    }
    return 0;
}