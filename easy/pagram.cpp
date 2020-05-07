#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int checked[26];
    for (int i = 0; i < 26; i++)
        checked[i] = 0;

    int count = 0;
    char ch;
    for (int i = 0; i < n; i++)
    {
        count++;
        cin >> ch;
        !checked[toupper(ch) - 65] ? checked[toupper(ch) - 65] = 1 : count--;
    }
    count == 26 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}