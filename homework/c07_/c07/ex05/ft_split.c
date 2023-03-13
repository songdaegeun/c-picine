#include <stdlib.h>

int s_len(char *src)
{
    char *p_src;

    p_src = src;
    while (*p_src++)
        ;
    return (p_src - 1 - src);
}

int is_match(char *str, char *match)
{
    int i;

    i = 0;
    while (match[i])
    {
        if (str[i] != match[i])
            return (0);
        i++;
    }
    return (1);
}

void s_cpy(char **dest, char *src, char *sep)
{
    int i;
    char *s_dest;

    i = 0;
    while (!is_match(src + i, sep) && src[i])
        i++;
    s_dest = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;
    while (!is_match(src + i, sep) && src[i])
    {
        s_dest[i] = src[i];
        i++;
    }
    s_dest[i] = '\0';
    *dest = s_dest;
}

char **ft_split(char *str, char *charset)
{
    char **p_strs;
    char *s_dest;
    int count;
    int i;
    int j;

    if (!*str)
        return (0);
    count = 1;
    i = 0;
    while (str[i])
    {
        if (is_match(str + i, charset))
            count++;
        i++;
    }
    p_strs = (char **)malloc(sizeof(char *) * (count + 1));
    p_strs[count] = (void *)0;
    i = 0;
    while (!is_match(str + i, charset))
        i++;
    s_dest = (char *)malloc(sizeof(char) * (i + 1));
    p_strs[0] = s_dest;
    i = 0;
    while (!is_match(str + i, charset))
    {
        s_dest[i] = str[i];
        i++;
    }
    s_dest[i] = '\0';
    j = 1;
    while (str[i])
    {
        if (is_match(str + i, charset))
        {
            i += s_len(charset);
            s_cpy(&p_strs[j], str + i, charset);
            j++;
        }
        i++;
    }
    return (p_strs);
}

// int main()
// {
//     printf("%s", (ft_split("abc, cd, ef", ", ")[1]));
// }