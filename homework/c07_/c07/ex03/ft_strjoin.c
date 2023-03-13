#include <stdlib.h>
#include <stdio.h>

int s_len(char *str)
{
    char *p_str;

    p_str = str;
    while (*p_str++)
        ;
    return (p_str - 1 - str);
}

char *s_cat(char *dest, char *src)
{
    int dest_len;
    int i;

    dest_len = 0;
    i = 0;
    while (dest[i])
    {
        dest_len++;
        i++;
    }
    i = 0;
    while (src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}

void allocate_s_res(char *s_res, char **strs, int size, char *sep)
{
    int i;
    
    i = 0;
    while (i < size)
    {
        s_cat(s_res, strs[i]);
        if(!(i == size - 1))
           s_cat(s_res, sep);
        i++;
    }
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int total_size;
    char *s_res;

    i = 0;
    total_size = 0;
    if (size == 0)
    {
        s_res = (char *)malloc(sizeof(char) * 1);
        s_res[0] = '\0';
        return (s_res);
    }
    while (i < size)
    {
        total_size += s_len(strs[i]);
        if(!(i == size - 1))
            total_size += s_len(sep);
        i++;
    }
    s_res = (char *)malloc(sizeof(char) * total_size);
    if (!s_res)
        return ((void *)0);
    allocate_s_res(s_res, strs, size, sep);
    return (s_res);
}

// int main()
// {
//     char *pps[5];
//     char *s = ", ";
//     pps[0] = "123";
//     pps[1] = "456";
//     pps[2] = "789";
//     printf("%s", ft_strjoin(3, pps, s));
// }
