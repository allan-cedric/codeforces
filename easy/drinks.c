#include <stdio.h>

int main()
{
    float drinks;
    scanf("%f", &drinks);

    int i;
    float d, volume = 0;
    for (i = 0; i < drinks; i++)
    {
        scanf("%f", &d);
        volume += (d / 100);
    }
    volume /= drinks;
    printf("%.5f\n", volume * 100);
    return 0;
}