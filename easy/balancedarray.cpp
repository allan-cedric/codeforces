#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n / 2];
        if (!((n / 2) % 2))
        {
            cout << "Yes" << endl;
            for (int i = 0, even = 2; i < (n / 2); i++, even += 2)
            {
                cout << even << " ";
                arr[i] = even - 1;
            }
            arr[(n / 2) - 1] += (n / 2);
            for (int i = 0; i < (n / 2); i++)
                cout << arr[i] << " ";
            cout << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}