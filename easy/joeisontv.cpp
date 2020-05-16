#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double s = 0;
    cin >> n;
    for (double i = 1; i <= n; i++)
        s += (1 / i);
    cout << fixed << setprecision(12) << s << endl;

    return 0;
}