#include <stdio.h>
#include <stdlib.h>

void quicksort(int *v, int ini, int end);
int partition(int *v, int ini, int end);
void swap(int *v, int i, int j);

int main()
{
    int v[50];
    int i = 0;
    char ch = getchar();
    char *s = malloc(2);

    while (ch != 10)
    {
        if (ch != '+')
        {
            s[0] = ch;
            s[1] = 0;
            v[i++] = atoi(s);
        }
        ch = getchar();
    }

    free(s);

    if (i)
    {
        quicksort(v, 0, i - 1);
        int j;
        for (j = 0; j < i - 1; j++)
            printf("%i+", v[j]);
        printf("%i\n", v[j]);
    }

    return 0;
}

void quicksort(int *v, int ini, int end)
{
    if (ini < end)
    {
        int pivot = partition(v, ini, end);
        quicksort(v, ini, pivot - 1);
        quicksort(v, pivot + 1, end);
    }
}

int partition(int *v, int ini, int end)
{
    int pivot = v[ini];
    int i, j;
    for (i = end, j = end; j > ini; j--)
    {
        if (v[j] > pivot)
            swap(v, i--, j);
    }
    swap(v, i, ini);
    return i;
}

void swap(int *v, int i, int j)
{
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}