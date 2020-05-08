#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int palindrome_str(std::string s);

int main()
{
    string row;
    string unique_row = "";
    getline(cin, row);

    vector<int> num_balls(1, 1);
    unique_row += row[0];
    for (int i = 1, j = 0; i < row.length(); i++)
    {
        if (row[i - 1] != row[i])
        {
            num_balls.push_back(1);
            unique_row += row[i];
            j++;
        }
        else
            num_balls[j]++;
    }

    if (unique_row.length() % 2)
    {
        if (palindrome_str(unique_row))
        {
            int i;
            for (i = 0; i < (num_balls.size() >> 1); i++)
            {
                if (num_balls[i] + num_balls[(num_balls.size() - 1) - i] <= 2)
                {
                    cout << 0 << endl;
                    return 0;
                }
            }
            (num_balls[i] < 2) ? cout << 0 << endl : cout << num_balls[i] + 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}

int palindrome_str(std::string s)
{
    for (int i = 0; i <= (s.length() >> 1); i++)
    {
        if (s[i] != s[(s.length() - 1) - i])
            return 0;
    }
    return 1;
}