#include <stdio.h>
#include <string.h>

int main()
{
    char s[102], t[102];

    fgets(s, 102, stdin);
    s[strcspn(s, "\n")] = 0;

    fgets(t, 102, stdin);
    t[strcspn(t, "\n")] = 0;

    if (strlen(s) == strlen(t))
    {
        int i;
        for (i = 0; i < strlen(s); i++)
        {
            if (s[i] != t[strlen(t) - 1 - i])
                break;
        }
        !s[i] ? printf("YES\n") : printf("NO\n");
    }
    else
        printf("NO\n");
    return 0;
}