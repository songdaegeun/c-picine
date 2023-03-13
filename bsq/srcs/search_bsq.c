/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_bsq.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongkli <seongkli@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:34:51 by seongkli          #+#    #+#             */
/*   Updated: 2023/03/02 05:35:30 by seongkli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/map_info.h"
#include "../includes/process.h"

int	min(int a, int b, int c)
{
	int	m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void	fill_map_calc(t_map_info *info, int **map_calc)
{
	int	i;
	int	j;

	i = -1;
	while (++i < info->size_y)
		map_calc[i][0] = (info->map)[i][0];
	j = -1;
	while (++j < info->size_x)
		map_calc[0][j] = (info->map)[0][j];
	i = 0;
	while (++i < info->size_y)
	{
		j = 0;
		while (++j < info->size_x)
		{
			if ((info->map)[i][j] == 1)
				map_calc[i][j] = min(map_calc[i][j - 1], map_calc[i - 1][j], \
						map_calc[i - 1][j - 1]) + 1;
			else
				map_calc[i][j] = 0;
		}
	}
}

void	draw_square(t_map_info *info, int max_len, int max_i, int max_j)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	i = max_i;
	while (i > max_i - max_len)
	{
		j = max_j;
		while (j > max_j - max_len)
		{
			(info->map)[i][j] = 2;
			j--;
		}
		i--;
	}
}

void	find_biggest_square(t_map_info *info, int **map_calc)
{
	int	i;
	int	j;
	int	max_len;
	int	max_i;
	int	max_j;

	max_len = 0;
	max_i = 0;
	max_j = 0;
	i = -1;
	while (++i < info->size_y)
	{
		j = -1;
		while (++j < info->size_x)
		{
			if (max_len < map_calc[i][j])
			{
				max_len = map_calc[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}
	draw_square(info, max_len, max_i, max_j);
}

void	draw_biggest_square(t_map_info *info)
{
	int	i;
	int	**map_calc;

	map_calc = (int **)malloc(sizeof(int *) * info->size_y);
	i = 0;
	while (i < info->size_y)
		map_calc[i++] = (int *)malloc(sizeof(int) * info->size_x);
	fill_map_calc(info, map_calc);
	find_biggest_square(info, map_calc);
	memory_release(map_calc, info->size_y);
}
