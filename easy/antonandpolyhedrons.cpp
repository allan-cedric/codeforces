#include <iostream>

using namespace std;

int main()
{
    int num_poly, num_faces = 0;
    string poly;
    cin >> num_poly;
    while (num_poly--)
    {
        cin >> poly;
        switch (poly[0])
        {
        case 'T':
            num_faces += 4;
            break;
        case 'C':
            num_faces += 6;
            break;
        case 'O':
            num_faces += 8;
            break;
        case 'D':
            num_faces += 12;
            break;
        default:
            num_faces += 20;
        }
    }
    cout << num_faces << endl;
    return 0;
}