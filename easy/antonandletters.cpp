#include <iostream>
#include <list>

using namespace std;

int main()
{
    string full_set;
    getline(cin, full_set);
    list<char> letters;

    if (full_set.length() != 2)
    {
        for (int i = 1; i < full_set.length(); i += 3)
            letters.push_back(full_set[i]);
        letters.sort();
        letters.unique();
    }
    cout << letters.size() << endl;

    return 0;
}