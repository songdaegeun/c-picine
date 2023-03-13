/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:26:11 by dasong            #+#    #+#             */
/*   Updated: 2023/02/24 03:28:24 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	p_nmb(int nmb)
{
	char	ch;

	if (nmb / 10)
		p_nmb(nmb / 10);
	ch = nmb % 10 + '0';
	write(1, &ch, 1);
}

void	p_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	size;

	i = 0;
	while (par[i].str)
	{
		p_str(par[i].str);
		size = par[i].size;
		p_nmb(size);
		write(1, "\n", 1);
		p_str(par[i].copy);
		i++;
	}
}

// int main()
// {
//     char *strs[2] = {"123", "456"};

//     ft_show_tab(ft_strs_to_tab(2, strs));
// }
