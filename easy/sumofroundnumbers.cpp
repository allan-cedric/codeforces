#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int counting_summands(int n);

int main()
{
    int t, n, b = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << counting_summands(n) << endl;
        while (n)
        {
            if (n % 10)
                cout << (n % 10) * b << " ";
            n /= 10;
            b *= 10;
        }
        b = 1;
        cout << endl;
    }
    return 0;
}

int counting_summands(int n)
{
    int count = 0;
    while (n)
    {
        if (n % 10)
            count++;
        n /= 10;
    }
    return count;
}