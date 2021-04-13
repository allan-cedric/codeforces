#include <bits/stdc++.h>

using namespace std;

void first_op(vector<uint16_t> &v);
void second_op(vector<uint16_t> &v);

int one_way(vector<uint16_t> v);
int second_way(vector<uint16_t> v);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    uint16_t n;
    cin >> n;
    n *= 2;
    vector<uint16_t> permutation(n);

    while (n--)
        cin >> permutation[permutation.size() - n - 1];

    int num_op_one = one_way(permutation);
    int num_op_second = second_way(permutation);

    if(num_op_one < 0 || num_op_second < 0)
        cout << max(num_op_one, num_op_second) << "\n";
    else
        cout << min(num_op_one, num_op_second) << "\n";

    return 0;
}

void first_op(vector<uint16_t> &v)
{
    for (int i = 0; i < v.size(); i += 2)
        swap(v[i], v[i + 1]);
}

void second_op(vector<uint16_t> &v)
{
    for (int i = 0; i < v.size() / 2; i++)
        swap(v[i], v[v.size() / 2 + i]);
}

int one_way(vector<uint16_t> v)
{
    int num_op = 0;
    uint16_t op = 0;
    vector<uint16_t> v_copy = v;

    while (!is_sorted(v.begin(), v.end()))
    {
        if (!op)
            first_op(v);
        else
            second_op(v);
        num_op++;
        if (v == v_copy)
            return -1;
        op ^= 1;
    }
    return num_op;
}

int second_way(vector<uint16_t> v)
{
    int num_op = 0;
    uint16_t op = 1;
    vector<uint16_t> v_copy = v;

    while (!is_sorted(v.begin(), v.end()))
    {
        if (!op)
            first_op(v);
        else
            second_op(v);
        num_op++;
        if (v == v_copy)
            return -1;
        op ^= 1;
    }
    return num_op;
}
