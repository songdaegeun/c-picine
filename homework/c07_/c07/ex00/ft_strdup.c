#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *s_res;
    char *t_src;
    int i;

    i = 0;
    t_src = src;
    while (*t_src++)
    {
        i++;
    }
    s_res = (char *)malloc(sizeof(char) * i);
    i = 0;
    while (src[i])
    {
        s_res[i] = src[i];
        i++;
    }
    s_res[i] = '\0';
    return (s_res);
}