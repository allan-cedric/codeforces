#include <stdio.h>
#include <string.h>

void restart_state(int *v, int size);
void swap(char *v, int i, int j);

int main()
{
    int n, t;
    scanf("%i %i", &n, &t);

    char queue[n + 1];
    getchar();
    fgets(queue, n + 1, stdin);
    queue[strcspn(queue, "\n")] = 0;

    int queue_state[n];
    restart_state(queue_state, n);

    int j, i;
    for (j = 0; j < t; j++)
    {
        for (i = 1; i < n; i++)
        {
            if ((queue[i - 1] < queue[i]) && !queue_state[i - 1])
            {
                swap(queue, i - 1, i);
                queue_state[i] = 1;
            }
        }
        restart_state(queue_state, n);
    }
    puts(queue);

    return 0;
}

void restart_state(int *v, int size)
{
    int i;
    for (i = 0; i < size; i++)
        v[i] = 0;
}

void swap(char *v, int i, int j)
{
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}