#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);

    char ch;
    int i, anton = 0;
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &ch);
        if (ch == 'A')
            anton++;
    }

    if (anton > n - anton)
        printf("Anton\n");
    else if (anton < n - anton)
        printf("Danik\n");
    else
        printf("Friendship\n");

    return 0;
}