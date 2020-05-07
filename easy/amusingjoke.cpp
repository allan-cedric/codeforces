#include <iostream>

using namespace std;

int main()
{
    string guest, home, pile;
    getline(cin, guest);
    getline(cin, home);
    getline(cin, pile);
    guest.append(home);
    if (guest.length() != pile.length())
    {
        cout << "NO" << endl;
        return 0;
    }
    int chars_guest[26], chars_pile[26];
    for (int i = 0; i < 26; i++)
    {
        chars_guest[i] = 0;
        chars_pile[i] = 0;
    }
    for (int i = 0; i < guest.length(); i++)
    {
        chars_guest[guest[i] - 65]++;
        chars_pile[pile[i] - 65]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (chars_guest[i] ^ chars_pile[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}