#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> colors;
    for (int i = 0, c; i < 4; i++)
    {
        cin >> c;
        colors.push_back(c);
    }
    colors.sort();

    int count = 0;
    list<int>::iterator itr = colors.begin();
    colors.end()--;
    while (itr != colors.end())
    {
        if (!(*itr ^ *++itr))
            count++;
    }
    cout << count << endl;

    return 0;
}