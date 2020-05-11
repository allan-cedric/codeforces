#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n, k, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        (n % k) <= (k >> 1) ? cout << n << endl : cout << n - ((n % k) - (k >> 1)) << endl;
    }
    return 0;
}