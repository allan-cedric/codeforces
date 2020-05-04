#include <stdio.h>

int main()
{
    int n, problem;
    scanf("%i", &n);
    while (n--)
    {
        scanf("%i", &problem);
        if (problem)
        {
            printf("hard\n");
            return 0;
        }
    }
    printf("easy\n");

    return 0;
}