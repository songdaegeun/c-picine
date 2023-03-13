#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *ans;

    ans = (int *)malloc(sizeof(int) * (max - min));
    if (ans == 0)
        return (-1);
    if (min >= max)
        return (0);
    i = 0;
    while (min < max)
    {
        (ans)[i] = min;
        min++;
        i++;
    }
    *range = ans;
    return (max - min);
}
