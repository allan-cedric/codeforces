#include <stdio.h>

int main()
{
    int dragon[4];
    int num_dragons, i;
    for (i = 0; i < 4; i++)
        scanf("%i", &dragon[i]);
    scanf("%i", &num_dragons);

    int j, suffered = 0;
    for (i = 1; i <= num_dragons; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (!(i % dragon[j]))
            {
                suffered++;
                break;
            }
        }
    }
    printf("%i\n", suffered);
    return 0;
}