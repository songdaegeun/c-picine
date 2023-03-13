/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:07:15 by dasong            #+#    #+#             */
/*   Updated: 2023/02/24 01:27:47 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

int	count_digit(long long nbr, int num)
{
	int	cnt;

	cnt = 1;
	while (nbr / num)
	{
		nbr /= num;
		cnt++;
	}
	return (cnt);
}

void	convert_base(long long nbr, char *base, char *res, int num_len)
{
	int	num;
	int	len;
	int	depth;

	num = ft_strlen(base);
	len = count_digit(nbr, num);
	depth = 0;
	if (len != num_len)
	{
		res[0] = '-';
		len++;
	}
	while (nbr)
	{
		res[len - 1 - depth] = base[nbr % num];
		nbr /= num;
		depth++;
	}
}

int	is_available_base_to(char *base)
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
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (check_arr[(int)base[i]] > 1)
			return (0);
		i++;
	}
	return (1);
}

int	return_len(long long *l_nbr, int num)
{
	int	len;

	if (*l_nbr < 0)
	{
		(*l_nbr) *= -1;
		len = count_digit(*l_nbr, num);
		len++;
	}
	else
		len = count_digit(*l_nbr, num);
	return (len);
}

char	*ft_convert_base2(int nbr, char *base_to)
{
	int			num;
	long long	l_nbr;
	int			len;
	char		*res;

	l_nbr = nbr;
	num = ft_strlen(base_to);
	if (num < 2 || !is_available_base_to(base_to))
		return (0);
	len = return_len(&l_nbr, num);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	convert_base(l_nbr, base_to, res, len);
	return (res);
}
