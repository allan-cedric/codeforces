#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << ((n % 2) + 8) << " " << (n - ((n % 2) + 8)) << endl;
    return 0;
}