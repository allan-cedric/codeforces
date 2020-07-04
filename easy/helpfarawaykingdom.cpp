#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string number;
    cin >> number;
    int dotPos = number.find(".");
    if (number[dotPos - 1] == '9')
        cout << "GOTO Vasilisa.\n";
    else if (number[dotPos + 1] < '5')
        cout << number.substr(0, dotPos) << "\n";
    else
    {
        while (number[dotPos - 1] == 9)
        {
            number[dotPos - 1] = 0;
            dotPos--;
        }
        number[dotPos - 1]++;
        cout << number.substr(0, dotPos) << "\n";
    }

    return 0;
}