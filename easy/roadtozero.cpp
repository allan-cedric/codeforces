#include <iostream>

using namespace std;

int main()
{
    long long t, x, y, a, b;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> a >> b;
        cout << b * min(x, y) * ((a << 1) >= b) + a * abs((x - y) * ((a << 1) >= b) + (x + y) * ((a << 1) < b)) << endl;
    }
    return 0;
}