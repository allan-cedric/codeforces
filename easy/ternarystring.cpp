#pragma GCC optimize("O3")

#include <bits/stdc++.h>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string s, sub_s;
    std::vector<int> digit_times;
    int t, i, n1, n2, n3, count, shortest;
    char c1;
    std::cin >> t;
    while (t--)
    {
        std::cin >> s;
        n1 = n2 = n3 = 0;
        c1 = s[0];
        for (i = 0, count = 0, shortest = s.length(); i < s.length(); count++, c1 = s[i], i++)
        {
            if (c1 != s[i])
            {
                digit_times.push_back(count);
                count = 0;
            }
            if (s[i] == '1')
                n1 = 1;
            else if (s[i] == '2')
                n2 = 1;
            else
                n3 = 1;
        }
        digit_times.push_back(count);
        if (n1 && n2 && n3)
        {
            s.erase(std::unique(s.begin(), s.end()), s.end());
            for (int i = 0; i < s.length() - 2; i++)
            {
                sub_s = s.substr(i, 3);
                std::sort(sub_s.begin(), sub_s.end());
                if (!(sub_s.compare("123")) && digit_times[i + 1] < shortest)
                    shortest = digit_times[i + 1];
            }
            std::cout << shortest + 2 << std::endl;
        }
        else
            std::cout << 0 << std::endl;
        digit_times.clear();
    }
    return 0;
}