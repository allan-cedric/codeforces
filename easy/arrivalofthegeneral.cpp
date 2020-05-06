#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num_soldiers, height, max_index = 0, min_index = 0, max_value, min_value;
    cin >> num_soldiers;
    cin >> height;
    max_value = height;
    min_value = max_value;
    for (int i = 1; i < num_soldiers; i++)
    {
        cin >> height;
        if (height > max_value)
        {
            max_value = height;
            max_index = i;
        }
        else if (height <= min_value)
        {
            min_value = height;
            min_index = i;
        }
    }
    if (max_index <= min_index)
        cout << num_soldiers - 1 - min_index + max_index << endl;
    else
        cout << num_soldiers - 2 - min_index + max_index << endl;

    return 0;
}