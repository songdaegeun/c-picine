/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:24:58 by dasong            #+#    #+#             */
/*   Updated: 2023/02/23 12:25:17 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*s_res;
	int	i;

	if (min >= max)
		return ((void *)0);
	s_res = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		s_res[i] = min;
		min++;
		i++;
	}
	return (s_res);
}

// #include <stdio.h>
// int main()
// {
//     int i = 0;

//     while(i < 4)
//     {    
//         printf("[%d]\n", ft_range(1, 5)[i]);
//         i++;
//     }
// }
