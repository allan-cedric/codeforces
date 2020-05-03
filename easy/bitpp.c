#include <stdio.h>

int main()
{
    int lin, op, X = 0;
    char ch;

    scanf("%i", &lin);
    getchar();
    while (0 < lin--)
    {
        op = 0;
        ch = getchar();
        while (ch != 10)
        {
            if (!op)
            {
                if (ch == '+')
                {
                    X++;
                    op = 1;
                }
                else if (ch == '-')
                {
                    X--;
                    op = 1;
                }
            }
            ch = getchar();
        }
    }
    printf("%i\n", X);
    return 0;
}