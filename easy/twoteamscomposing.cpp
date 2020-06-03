#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <vector>

int main()
{
    int t, n, repeat, max_repeat, max_unique;
    std::vector<int> skills;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n;
        skills.resize(n);
        for (int i = 0; i < n; i++)
            std::cin >> skills[i];
        if (n == 1)
            std::cout << 0 << std::endl;
        else
        {
            max_repeat = repeat = max_unique = 1;
            stable_sort(skills.begin(), skills.end());
            for (int i = 1; i < n; i++)
            {
                if (skills[i - 1] == skills[i])
                    repeat++;
                else
                {
                    max_unique++;
                    max_repeat = std::max(repeat, max_repeat);
                    repeat = 1;
                }
            }
            max_repeat = std::max(repeat, max_repeat);
            std::cout << std::min(max_unique, max_repeat - (max_unique == max_repeat)) << std::endl;
        }
    }
    return 0;
}