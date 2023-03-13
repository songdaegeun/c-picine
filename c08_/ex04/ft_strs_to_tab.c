/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:14:34 by dasong            #+#    #+#             */
/*   Updated: 2023/02/23 20:25:11 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	s_len(char *str)
{
	char	*p_str;

	p_str = str;
	while (*p_str++)
		;
	return (p_str - 1 - str);
}

char	*s_cpy(char *src)
{
	char	*dest;
	int		src_len;
	int		i;

	src_len = s_len(src);
	dest = (char *)malloc(sizeof(char) * (src_len + 1));
	if (!dest)
		return ((void *)0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	res = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return ((void *)0);
	res[ac].str = (void *)0;
	i = 0;
	while (i < ac)
	{
		(*(res + i)).size = s_len(av[i]);
		(*(res + i)).str = av[i];
		(*(res + i)).copy = s_cpy(av[i]);
		i++;
	}
	return (res);
}

// #include <stdio.h>

// int main()
// {
//     char *strs[2] = {"123", "456"};
//     int i = 0;

//     while (i < 2)
//     {
//         printf("size: [%d]\n", ft_strs_to_tab(2, strs)[i].size);
// 		printf("%s\n", ft_strs_to_tab(2, strs)[i].str);
// 		printf("%s\n", ft_strs_to_tab(2, strs)[i].copy);
//         i++;
//     }
// }
