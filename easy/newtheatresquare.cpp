#pragma GCC optimize("O3")

#include <bits/stdc++.h>

int main()
{
    int t, n, m, x, y, smallest_price;
    std::string tiles;
    std::cin >> t;
    getchar();
    while (t--)
    {
        std::cin >> n >> m >> x >> y;
        getchar();
        smallest_price = 0;
        for (int i = 0, count_white = 0; i < n; i++, count_white = 0)
        {
            std::getline(std::cin, tiles);
            for (int j = 0; j < m; j++)
            {
                if (tiles[j] == '*')
                {
                    smallest_price += (((2 * x) <= y) ? count_white * x : y * (count_white / 2) + x * (count_white % 2));
                    count_white = 0;
                }
                else
                    count_white++;
            }
            smallest_price += (((2 * x) <= y) ? count_white * x : y * (count_white / 2) + x * (count_white % 2));
        }
        std::cout << smallest_price << std::endl;
    }
    return 0;
}