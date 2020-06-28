#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, price, maxIndex, highestPrice = 0, secondHighestprice = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> price;
        if (price > highestPrice)
        {
            secondHighestprice = highestPrice;
            highestPrice = price;
            maxIndex = i;
        }
        else if (price > secondHighestprice)
            secondHighestprice = price;
    }
    cout << maxIndex << " " << secondHighestprice << "\n";
    return 0;
}