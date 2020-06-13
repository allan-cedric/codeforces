#pragma GCC optimize("O3")

#include <bits/stdc++.h>
#include <vector>

typedef struct Cell
{
    int i, j, claim;
} Cell;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::vector<Cell> matrix;
    int t, n, m;
    Cell cell;

    std::cin >> t;
    while (t--)
    {
        std::cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cin >> cell.claim;
                cell.i = i;
                cell.j = j;
                matrix.push_back(cell);
            }
        }
        int i = 0, j;
        for (Cell c1 = matrix[i]; i < matrix.size(); c1.claim ? i = 0 : i++, c1 = matrix[i])
        {
            if (c1.claim)
            {
                j = 0;
                matrix.erase(matrix.begin() + i);
                for (Cell c2 = matrix[j]; j < matrix.size(); c2 = matrix[j])
                {
                    if ((c1.i == c2.i || c1.j == c2.j) && !c2.claim)
                        matrix.erase(matrix.begin() + j);
                    else
                        j++;
                }
            }
        }
        int parity = 1, pos_i, pos_j;
        while (!matrix.empty())
        {
            parity++;
            pos_i = matrix[0].i;
            pos_j = matrix[0].j;
            int j = 0;
            for (Cell c2 = matrix[j]; j < matrix.size(); c2 = matrix[j])
            {
                if (pos_i == c2.i || pos_j == c2.j)
                    matrix.erase(matrix.begin() + j);
                else
                    j++;
            }
        }
        if (parity % 2)
            std::cout << "Vivek" << std::endl;
        else
            std::cout << "Ashish" << std::endl;
        matrix.clear();
    }

    return 0;
}