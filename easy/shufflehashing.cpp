#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string password, hash, password_try;
    int t, found;
    cin >> t;
    getchar();
    while (t--)
    {
        getline(cin, password);
        getline(cin, hash);
        if (password.length() <= hash.length())
        {
            found = 1;
            stable_sort(password.begin(), password.end());
            for (int i = 0; found && hash.length() - i >= password.length(); i++)
            {
                password_try = hash.substr(i, password.length());
                stable_sort(password_try.begin(), password_try.end());
                found = password.compare(password_try);
            }
            cout << (!found ? "YES" : "NO") << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
