#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define FASTIO                             \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(0);                       \
    std::cout.tie(0);
using namespace std;

int main()
{
    FASTIO
    string s1, s2;
    int n, i = 1, noPhoneCode = 0;
    cin >> n;
    cin >> s1;
    while (--n)
    {
        cin >> s2;
        if (noPhoneCode || s1.length() == 1 || s2.length() == 1 || s1[0] != s2[0])
        {
            noPhoneCode = 1;
            continue;
        }
        while (s1.substr(0, s1.length() - i) != s2.substr(0, s2.length() - i))
            i++;
    }
    if (noPhoneCode)
        cout << "0\n";
    else
        cout << s1.length() - i << "\n";
    return 0;
}