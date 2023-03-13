/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:00:25 by dasong            #+#    #+#             */
/*   Updated: 2023/02/19 11:57:44 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*c;

	c = str;
	while (*c++)
		;
	return (c - 1 - str);
}

int	is_available(char *base)
{
	int	i;
	int	check_arr[128];

	i = 0;
	while (i < 128)
	{
		check_arr[i] = 0;
		i++;
	}
	i = 0;
	while (base[i])
	{
		check_arr[(int)base[i]] += 1;
		if (base[i] == '-' || base[i] == '+' || (base[i] >= 9 && \
					base[i] <= 13) || base[i] == 32)
			return (0);
		if (check_arr[(int)base[i]] > 1)
			return (0);
		i++;
	}
	return (1);
}

int	is_in_base(char ch, char *base)
{
	while (*base)
	{
		if (ch == *base)
			return (1);
		base++;
	}
	return (0);
}

int	str_to_nbr(char *str, char *base, int num, int res)
{
	int			i;
	int			j;
	int			sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_in_base(str[i], base))
	{
		j = 0;
		while (str[i] != base[j])
			j++;
		res *= num;
		res += j;
		i++;
	}
	return (res * sign);
}

 char *ft_convert_base(char *nbr, char *base_from, char *base_to);
 {
	int	num;
	int	nbr;
	char *str;
	num = ft_strlen(base);
	if (num < 2 || !is_available(base))
		return (0);
	nbr = str_to_nbr(str, base, num, 0);
	str = ft_convert_base2(nbr);
	return (str);
}
