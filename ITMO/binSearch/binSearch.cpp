#include <bits/stdc++.h>
#include <vector>

int binSearch(std::vector<int> &v, int x);

int main()
{
    std::ios_base::sync_with_stdio(false);

    // Vector's size
    int n;
    std::cout << "Size: ";
    std::cin >> n;

    // Vector's input
    std::vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        std::cin >> v[i];

    // x value
    int x, index;
    std::cout << "x: ";
    std::cin >> x;

    index = binSearch(v, x);
    std::cout << index << "\n";
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