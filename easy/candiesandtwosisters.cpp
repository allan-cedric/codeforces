#include <iostream>

using namespace std;

int main()
{
    int t, candies;
    cin >> t;
    while (t--)
    {
        cin >> candies;
        cout << ((candies - 1) >> 1) << endl;
    }
    return 0;
}