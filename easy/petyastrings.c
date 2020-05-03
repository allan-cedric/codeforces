#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char *s1 = malloc(102);
    char *s2 = malloc(102);

    fgets(s1, 102, stdin);
    s1[strcspn(s1, "\n")] = 0;

    fgets(s2, 102, stdin);
    s2[strcspn(s2, "\n")] = 0;

    int i;
    for (i = 0; i < strlen(s1); i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    int cmp = strcmp(s1, s2);
    if (cmp != 1 && cmp)
        printf("-1\n");
    else
        printf("%i\n", cmp);

    free(s1);
    free(s2);

    return 0;
}