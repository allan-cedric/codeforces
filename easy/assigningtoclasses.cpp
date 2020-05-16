#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> students;
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        students.resize(2 * n);
        for (int i = 0; i < 2 * n; i++)
            cin >> students[i];
        stable_sort(students.begin(), students.end());
        cout << students[n] - students[n - 1] << endl;
    }
}