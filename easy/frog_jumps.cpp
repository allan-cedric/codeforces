#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string s;
        getline(cin, s);

        int ini_pos = -1, d = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'R')
            {
                d = max(i - ini_pos, d);
                ini_pos = i;
            }
        }
        d = max((int)(s.size() - ini_pos), d);
        cout << d << "\n";
    }
    return 0;
}