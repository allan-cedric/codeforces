#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0, value = 1, j; i < (n >> 1); i++, value = !value)
    {
        for (j = 0; j < m; j++)
            cout << "#";
        cout << endl;
        if (value)
        {
            for (j = 0; j < m - 1; j++)
                cout << ".";
            cout << "#";
        }
        else
        {
            cout << "#";
            for (j = 0; j < m - 1; j++)
                cout << ".";
        }
        cout << endl;
    }
    for (int j = 0; j < m; j++)
        cout << "#";
    cout << endl;
    return 0;
}