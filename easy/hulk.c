#include <stdio.h>
#include <string.h>

int main()
{
    int layers, feeling = 0;
    scanf("%i", &layers);
    int i;
    for (i = 0; i < layers; i++, feeling = !feeling)
    {
        if (i)
            printf("that ");
        if (!feeling)
            printf("I hate ");
        else
            printf("I love ");
    }
    printf("it\n");
    return 0;
}