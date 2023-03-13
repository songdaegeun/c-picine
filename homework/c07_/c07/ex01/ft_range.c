#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *s_res;
    int i;

    if (min >= max)
        return ((void *)0);
    s_res = (int *)malloc(sizeof(char) * (max - min));
    i = 0;
    while (min < max)
    {
        s_res[i] = min;
        min++;
        i++;
    }
    return (s_res);
}

// int main()
// {
//     int i = 0;

//     while(i < 4)
//     {    
//         printf("[%d]\n", ft_range(1, 5)[i]);
//         i++;
//     }
// }