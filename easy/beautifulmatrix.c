#include <stdio.h>
#include <math.h>

int main()
{
    int mat[5][5];
    double euclidean;

    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%i", &mat[i][j]);
            if (mat[i][j])
                euclidean = sqrt((2 - i) * (2 - i) + (2 - j) * (2 - j));
        }
    }

    printf("%.0lf\n", ceil(euclidean));
    return 0;
}