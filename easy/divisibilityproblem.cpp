#include <iostream>

using namespace std;

int main()
{
    int a, b, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << (b - a % b) % b << endl;
    }
    return 0;
}