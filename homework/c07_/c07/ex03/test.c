#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
    char *pps[5];
    char *s = ", ";
    pps[0] = "123";
    pps[1] = "456";
    pps[2] = "789";
    printf("%s", ft_strjoin(3, pps, s));
}
