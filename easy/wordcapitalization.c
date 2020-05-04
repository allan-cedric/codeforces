#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *s = malloc(1001);

    fgets(s, 1001, stdin);
    s[strcspn(s, "\n")] = 0;

    s[0] = toupper(s[0]);
    puts(s);

    free(s);
    return 0;
}