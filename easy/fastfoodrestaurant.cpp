#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c, maximum, minimum, middle;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        maximum = max(max(a, b), c);
        minimum = min(min(a, b), c);
        middle = (a + b + c) - maximum - minimum;

        if (!maximum)
            cout << 0 << endl;
        else if (!middle)
            cout << 1 << endl;
        else if (minimum <= 1)
            cout << minimum + 2 + (middle >= 2 && maximum >= 2) << endl;
        else if (minimum == 2)
            cout << 4 + (maximum > 2) << endl;
        else
            cout << 6 + (minimum >= 4) << endl;
    }
    return 0;
}
