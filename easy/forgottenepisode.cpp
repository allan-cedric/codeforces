#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, forgottenEpisode = 1;
    cin >> n;
    for (int i = 2, episode; i <= n; i++)
    {
        cin >> episode;
        forgottenEpisode ^= (i ^ episode);
    }
    cout << forgottenEpisode << "\n";

    return 0;
}