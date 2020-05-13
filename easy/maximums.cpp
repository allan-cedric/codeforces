#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int first_max = max(0, b[0]);
    b[1] += first_max;
    cout << b[0] << " " << b[1] << " ";
    for (int i = 2; i < n; first_max = max(first_max, b[i - 1]), i++)
    {
        b[i] += max(first_max, b[i - 1]);
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}