#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse4")

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int t, old_size;
    cin >> t;
    getchar();
    while (t--)
    {
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '?')
            {
                if (i - 1 >= 0 && i + 1 < s.length())
                {
                    if (!abs(s[i - 1] - s[i + 1]) || s[i + 1] == '?')
                    {
                        switch (s[i - 1])
                        {
                        case 'a':
                            s[i] = 'b';
                            break;
                        case 'b':
                            s[i] = 'c';
                            break;
                        default:
                            s[i] = 'a';
                        }
                    }
                    else if (abs(s[i - 1] - s[i + 1]) == 1)
                    {
                        if (min(s[i - 1], s[i + 1]) == 'b')
                            s[i] = 'a';
                        else
                            s[i] = 'c';
                    }
                    else
                        s[i] = 'b';
                }
                else if (i - 1 >= 0)
                {
                    switch (s[i - 1])
                    {
                    case 'a':
                        s[i] = 'b';
                        break;
                    case 'b':
                        s[i] = 'c';
                        break;
                    default:
                        s[i] = 'a';
                    }
                }
                else
                {
                    switch (s[i + 1])
                    {
                    case 'a':
                        s[i] = 'b';
                        break;
                    case 'b':
                        s[i] = 'c';
                        break;
                    default:
                        s[i] = 'a';
                    }
                }
            }
        }
        old_size = s.length();
        s.erase(unique(s.begin(), s.end()), s.end());
        old_size == s.length() ? cout << s << endl : cout << -1 << endl;
    }
    return 0;
}