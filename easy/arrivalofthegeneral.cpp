#include <iostream>

using namespace std;

int main()
{
    int num_soldiers, max_index = 0, min_index = 0;

    cin >> num_soldiers;
    int heights[num_soldiers];
    for (int i = 0; i < num_soldiers; i++)
        cin >> heights[i];

    for (int i = 1; i < num_soldiers; i++)
    {
        if (heights[i] > heights[max_index])
            max_index = i;
        else if (heights[i] <= heights[min_index])
            min_index = i;
    }

    if (max_index <= min_index)
        cout << num_soldiers - 1 - min_index + max_index << endl;
    else
        cout << num_soldiers - 2 - min_index + max_index << endl;

    return 0;
}