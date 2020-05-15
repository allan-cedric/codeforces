#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m, my_grade, another_grade;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cin >> my_grade;
        for (int i = 1; i < n; i++)
        {
            cin >> another_grade;
            my_grade += another_grade;
        }
        cout << (my_grade >= m ? m : my_grade) << endl;
    }
    return 0;
}