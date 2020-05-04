#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[101];
    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = 0;

    int i, upper = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] < 97)
            upper++;
    }
    if (upper > strlen(s) - upper)
    {
        for (i = 0; i < strlen(s); i++)
            s[i] = toupper(s[i]);
    }
    else
    {
        for (i = 0; i < strlen(s); i++)
            s[i] = tolower(s[i]);
    }
    puts(s);

    return 0;
}