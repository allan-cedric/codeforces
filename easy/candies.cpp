#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    long long b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        b = 4;
        while (n % (b - 1))
            b <<= 1;
        cout << n / (b - 1) << endl;
    }
    return 0;
}