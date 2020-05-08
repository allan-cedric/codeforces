#include <iostream>

using namespace std;

int main()
{
    string p;
    getline(cin, p);
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}