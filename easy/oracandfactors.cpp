#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> crive(1000001, 1);
    for (int i = 2; i < 1000001; i++)
    {
        if (crive[i])
        {
            for (int j = 2 * i; j < 1000001; j += i)
                crive[j] = 0;
        }
    }
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (crive[n])
        {
            k--;
            n *= 2;
        }
        else if (n % 2)
        {
            k--;
            for (int i = 3; i < n; i += 2)
            {
                if (!(n % i))
                {
                    n += i;
                    break;
                }
            }
        }
        cout << n + (2 * k) << endl;
    }
    return 0;
}