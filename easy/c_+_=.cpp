#pragma GCC optimize("O3")

#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t, a, b, n, smallest;
    std::cin >> t;
    while(t--)
    {
        std::cin >> a >> b >> n;
        smallest = 0;
        while(std::max(a,b) <= n)
        {
            if(a > b)
                b += a;
            else
                a += b;
            smallest++;  
        }
        std::cout << smallest << std::endl;
    }
    return 0;
}