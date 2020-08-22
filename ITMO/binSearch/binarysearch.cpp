#include <bits/stdc++.h>
#include <vector>

int binSearch(std::vector<int> &v, int x);

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, k;
    std::cin >> n >> k;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i];

    for (int i = 0, q; i < k; i++)
    {
        std::cin >> q;
        if (binSearch(v, q) > -1)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}

int binSearch(std::vector<int> &v, int x)
{
    int l = -1, r = v.size(), m;
    while (l + 1 < r)
    {
        m = (l + r) / 2;
        if (v[m] == x)
            return m;
        else if (v[m] < x)
            l = m;
        else
            r = m;
    }
    return -1;
}