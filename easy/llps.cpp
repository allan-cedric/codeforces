#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    sort(s.begin(),s.end());
    for(int i = s.length() - 1; i >= 0 && s[i] == s[s.length() - 1]; i--)
        cout << s[s.length() - 1];
    cout << "\n";
    return 0;
}
