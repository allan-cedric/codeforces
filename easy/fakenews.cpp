#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, name = "heidi";
    cin >> s;
    if (s.length() < 5)
        cout << "NO\n";
    else
    {
        int i, j;
        for (i = j = 0; j < s.length() && i < name.length(); j++)
        {
            if (name[i] == s[j])
                i++;
        }
        cout << (i == name.length() ? "YES" : "NO") << "\n";
    }
    return 0;
}