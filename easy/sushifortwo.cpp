#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> rowSushi(n);
    for(int i = 0; i < n; i++)
        cin >> rowSushi[i];

    vector<int> countSeg;
    int count = 1;
    for(int i = 1; i < n; i++, count++)
    {
        if(rowSushi[i - 1] != rowSushi[i])
        {
            countSeg.push_back(count);
            count = 0;
        }
    }
    countSeg.push_back(count);

    int maximum = 0;
    for(int i = 1; i < countSeg.size(); i++)
        maximum = max(min(countSeg[i - 1], countSeg[i]), maximum);
    cout << maximum*2 << "\n";

    return 0;
}
