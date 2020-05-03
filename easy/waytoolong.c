#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int lin;
    scanf("%d", &lin);

    char **s = (char **)malloc(sizeof(char *) * lin);
    int i;
    for (i = 0; i < lin; i++)
        s[i] = (char *)malloc(101);

    int j;
    char ch = getchar();
    for (i = 0; i < lin; i++)
    {
        ch = getchar();
        for (j = 0; ch != 10 && j < 100; j++)
        {
            s[i][j] = ch;
            ch = getchar();
        }
        s[i][j] = 0;
    }

    int size;
    for (i = 0; i < lin; i++)
    {
        size = strlen(s[i]);
        if (size > 10)
            printf("%c%i%c\n", s[i][0], size - 2, s[i][size - 1]);
        else
            printf("%s\n", s[i]);
        free(s[i]);
    }
    free(s);
    return 0;
}