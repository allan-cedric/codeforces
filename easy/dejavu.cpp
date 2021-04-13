#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    uint16_t t;
    string s;

    cin >> t;
    cin.ignore();

    while (t--)
    {
        getline(cin, s);
        int size = s.size();

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != 'a')
            {
                s.insert((s.size() - 1 - i), "a");
                break;
            }
        }
        if (s.size() > size)
            cout << "YES\n" << s << "\n";
        else
            cout << "NO\n";
    }

    return 0;
}