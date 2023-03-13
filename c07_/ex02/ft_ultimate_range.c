/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:25:32 by dasong            #+#    #+#             */
/*   Updated: 2023/02/23 12:26:04 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			i;
	int			*ans;
	long long	res;

	res = max - min;
	if (min >= max)
		return (0);
	if (res > 2147483647)
		return (-1);
	ans = (int *)malloc(sizeof(int) * (max - min));
	if (!ans)
		return (-1);
	i = 0;
	while (min < max)
	{
		ans[i] = min;
		min++;
		i++;
	}
	*range = ans;
	return (res);
}

// #include <stdio.h>
// int main()
// {
//     int i = 0;
// 	int *range;
// 	ft_ultimate_range(&range, -4, 17);
//     while(i < 21)
//     {    
//         printf("[%d]\n", range[i]);
//         i++;
//     }
// }
