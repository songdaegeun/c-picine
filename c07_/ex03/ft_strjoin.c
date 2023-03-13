/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:26:15 by dasong            #+#    #+#             */
/*   Updated: 2023/02/25 00:10:47 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	s_len(char *str)
{
	char	*p_str;

	p_str = str;
	while (*p_str++)
		;
	return (p_str - 1 - str);
}

char	*s_cat(char *dest, char *src)
{
	int	dest_len;
	int	i;

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

void	allocate_s_res(char *s_res, char **strs, int size, char *sep)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		if (i == 0)
		{
			j = 0;
			while (strs[0][j])
			{
				s_res[j] = strs[0][j];
				j++;
			}
			s_res[j] = '\0';
		}
		else
			s_cat(s_res, strs[i]);
		if (!(i == size - 1))
			s_cat(s_res, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_size;
	char	*s_res;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		total_size += s_len(strs[i]);
		if (!(i == size - 1))
			total_size += s_len(sep);
		i++;
	}
	s_res = (char *)malloc(sizeof(char) * (total_size + 1));
	s_res[total_size] = '\0';
	if (!s_res)
		return ((void *)0);
	allocate_s_res(s_res, strs, size, sep);
	return (s_res);
}

// #include <stdio.h>
// int main(void)
// {
//     char *pps[5];
//     char *s = ",   ";
//     pps[0] = "123";
//     pps[1] = "456asd";
//     pps[2] = "789";
// 	pps[3] = "sda9";
// 	pps[4] = "78asd";
//     printf("%s", ft_strjoin(5, pps, s));
// 	printf("%s", ft_strjoin(0, pps, s));
// }
