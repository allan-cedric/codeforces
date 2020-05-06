#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int counting(vector<int> g, int n);

int main()
{
    vector<int> home, guest;
    int n, h, a;
    cin >> n;

    while (n--)
    {
        cin >> h >> a;
        home.push_back(h);
        guest.push_back(a);
    }
    sort(home.begin(), home.end());

    int games = 0;
    for (int i = 0, back = -1, back_games = 0; i < home.size(); back = home[i++])
    {
        if (!(back ^ home[i]))
            games += back_games;
        else
        {
            back_games = counting(guest, home[i]);
            games += back_games;
        }
    }
    cout << games << endl;

    return 0;
}

int counting(vector<int> g, int n)
{
    int count = 0;
    for (int i = 0; i < g.size(); i++)
        if (!(n ^ g[i]))
            count++;
    return count;
}