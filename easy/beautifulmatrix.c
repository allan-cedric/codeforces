#include <stdio.h>

int main()
{
    int mat[5][5];
    int euclidean;

    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%i", &mat[i][j]);
            if (mat[i][j])
            {
                if ((i % 4) || (j % 4))
                {
                    euclidean = 0;
                    while (euclidean * euclidean < (2 - i) * (2 - i) + (2 - j) * (2 - j))
                        euclidean++;
                }
                else
                    euclidean = 4;
            }
        }
    }

    printf("%i\n", euclidean);
    return 0;
}