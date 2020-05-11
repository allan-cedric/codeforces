#include <bits/stdc++.h>

using namespace std;

int main()
{
    string digits;
    int t, n, odd;
    cin >> t;
    getchar();
    while (t--)
    {
        odd = 0;
        cin >> n;
        getchar();
        getline(cin, digits);
        for (int i = 0; i < digits.length(); i++)
            odd += ((digits[i] - '0') % 2);

        while (!digits.empty() && !((digits[digits.length() - 1] - '0') % 2))
            digits.erase(digits.length() - 1, 1);

        if (digits.empty())
            cout << -1 << endl;
        else if (!(odd % 2))
            cout << digits << endl;
        else
        {
            int i;
            for (i = (digits.length() - 2); i >= 0; i--)
            {
                if ((digits[i] - '0') % 2)
                {
                    digits.erase(i, 1);
                    break;
                }
            }
            (i >= 0) ? cout << digits << endl : cout << -1 << endl;
        }
    }
    return 0;
}