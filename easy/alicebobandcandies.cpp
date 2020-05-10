#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int t, num_moves, num_candies, a, b, play_a, play_b, i;
    cin >> t;
    vector<int> sizes(1, 0);
    while (t--)
    {
        cin >> num_candies;
        sizes.resize(num_candies, 0);
        num_moves = play_a = play_b = a = b = num_moves = i = 0;
        for (int i = 0; i < num_candies; i++)
            cin >> sizes[i];

        play_a = sizes[0];
        a = play_a;
        num_moves++;
        while ((num_candies - i) > 1)
        {
            if (play_b < play_a)
            {
                play_b = 0;
                for (int k = num_candies - 1; (num_candies - i > 1) && play_b <= play_a; num_candies = k--)
                    play_b += sizes[k];
                b += play_b;
                num_moves++;
            }
            else if (play_a < play_b)
            {
                play_a = 0;
                for (int k = i + 1; (num_candies - i > 1) && play_a <= play_b; i = k++)
                    play_a += sizes[k];
                a += play_a;
                num_moves++;
            }
        }
        cout << num_moves << " " << a << " " << b << endl;
    }
    return 0;
}