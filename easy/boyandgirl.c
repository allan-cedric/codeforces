#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int alphabet[26];
    int i;
    for (i = 0; i < 26; i++)
        alphabet[i] = 0;

    char *s = malloc(101);
    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = 0;

    int count = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (!(alphabet[s[i] - 97]))
        {
            alphabet[s[i] - 97] = 1;
            count++;
        }
    }

    free(s);

    if (!(count % 2))
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}