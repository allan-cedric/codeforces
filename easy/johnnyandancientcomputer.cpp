#pragma GCC optimize("O3")

#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    uint64_t a, b;
    int t, count;
    std::cin >> t;
    while (t--)
    {
        std::cin >> a >> b;
        count = 0;
        if (a != b)
        {
            if (a < b)
                std::swap(a, b);
            while (a > b)
            {
                if (!(a % 8) && (a / 8 >= b))
                    a /= 8;
                else if (!(a % 4) && (a / 4 >= b))
                    a /= 4;
                else if (!(a % 2) && (a / 2 >= b))
                    a /= 2;
                else
                    break;
                count++;
            }
            if (a != b)
                count = -1;
        }
        std::cout << count << std::endl;
    }
    return 0;
}