/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_cal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongkli <seongkli@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:20:24 by seongkli          #+#    #+#             */
/*   Updated: 2023/03/02 07:25:04 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/process.h"
#include <stdlib.h>
#include <unistd.h>

int	str_len_to_newline(char *str)
{
	int	len;

	len = 0;
	if (*str)
	{
		while (str[len] != '\n')
			len++;
	}
	return (len);
}

void	pass_to_newline(char *buff, int *i)
{
	while (buff[(*i)] != '\n')
		(*i)++;
}

int	process_first_num(char *str, int len, int i, int sign)
{
	int	res;

	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9') && (i < len - 3))
	{
		free(str);
		write(1, "map error\n", 10);
		exit(0);
	}	
	return (sign * res);
}
