#include <iostream>

using namespace std;

int main()
{
    string players;
    getline(cin, players);
    if (players.length() < 8)
    {
        cout << "NO" << endl;
        return 0;
    }
    int count = 1;
    for (int i = 1; i < players.length(); i++)
    {
        (players[i - 1] == players[i]) ? count++ : count = 1;
        if (count >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}