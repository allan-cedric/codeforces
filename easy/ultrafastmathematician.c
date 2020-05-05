#include <stdio.h>
#include <string.h>

int main()
{
    char b1[102], b2[102];

    fgets(b1, 102, stdin);
    b1[strcspn(b1, "\n")] = 0;

    fgets(b2, 102, stdin);
    b2[strcspn(b2, "\n")] = 0;

    int i;
    for (i = 0; i < strlen(b1); i++)
        printf("%i", (b1[i] - '0') ^ (b2[i] - '0'));
    printf("\n");

    return 0;
}