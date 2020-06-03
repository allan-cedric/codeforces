#pragma GCC optimize("O3")

#include <bits/stdc++.h>
#include <vector>

void solve(std::vector<int> od, std::vector<int> ev);

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::vector<int> evens, odds;
    int t, n;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n;
        for (int i = 0, a; i < n; i++)
        {
            std::cin >> a;
            a % 2 ? odds.push_back(a) : evens.push_back(a);
        }
        solve(odds, evens);
        odds.clear();
        evens.clear();
    }
    return 0;
}

void solve(std::vector<int> od, std::vector<int> ev)
{
    if (!(od.size() % 2))
        std::cout << "Yes" << std::endl;
    else
    {
        for (auto i : od)
        {
            for (auto j : ev)
            {
                if (abs(i - j) == 1)
                {
                    std::cout << "Yes" << std::endl;
                    return;
                }
            }
        }
        std::cout << "No" << std::endl;
    }
}