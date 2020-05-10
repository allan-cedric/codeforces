#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, t, p;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        p = k % (n - 1) ? k / (n - 1) : ((k / (n - 1)) - 1);
        cout << k + p << endl;
    }
    return 0;
}