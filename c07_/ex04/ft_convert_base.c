/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:00:25 by dasong            #+#    #+#             */
/*   Updated: 2023/02/24 01:10:13 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_base2(int nbr, char *base_to);

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		number;
	char	*res;

	num = ft_strlen(base_from);
	if (num < 2 || !is_available(base_from))
		return (0);
	number = str_to_nbr(nbr, base_from, num, 0);
	if (!number)
	{
		res = (char *)malloc(sizeof(char) * 2);
		if (!res)
			return (0);
		res[0] = base_to[0];
		res[1] = '\0';
	}
	else
		res = ft_convert_base2(number, base_to);
	return (res);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[10] = "+-+256";
// 	printf("%s\n", ft_convert_base(str1, "0123456789", "0123456789abcdef"));
// 	char str2[10] = "-0";
// 	printf("%s\n", ft_convert_base(str2, "0123456789", "0123456789abcdef"));
// 	char str3[10] = "HjEU";
// 	printf("%s\n", ft_convert_base(str3, "&j\"CE#1UdxHv6", "G5"));
// 	char str4[10] = "&";
// 	printf("%s\n", ft_convert_base(str4, "&j\"CE#1UdxHv6", "G5"));
// 	char str5[10] = "--";
// 	printf("%s\n", ft_convert_base(str5, "&j\"CE#1UdxHv6", "G5"));
// 	char str6[10] = "--01234";
// 	printf("%s\n", ft_convert_base(str6, "01234567899", "01"));
// }
// // void __result(void)
// // {
// // 	system("leaks a.out");
// // }
