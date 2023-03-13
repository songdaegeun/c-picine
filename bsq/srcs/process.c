/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongkli <seongkli@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:37:00 by seongkli          #+#    #+#             */
/*   Updated: 2023/03/02 05:38:17 by seongkli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../includes/map_info.h"
#include "../includes/process.h"

void	display(t_map_info map_info)
{
	int	i;
	int	j;

	i = 0;
	while (i < map_info.size_y)
	{
		j = 0;
		while (j < map_info.size_x)
		{
			if (map_info.map[i][j] == 0)
				write(1, &map_info.obs, 1);
			else if (map_info.map[i][j] == 1)
				write(1, &map_info.empty, 1);
			else if (map_info.map[i][j] == 2)
				write(1, &map_info.full, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	memory_release(map_info.map, map_info.size_y);
}

int	check_symbol(char empty, char obs, char full)
{
	if (empty == obs)
		return (1);
	if (empty == full)
		return (1);
	if (obs == full)
		return (1);
	return (0);
}

int	map_error(char *buffer)
{
	if (buffer)
		free(buffer);
	write(1, "map error\n", 10);
	return (1);
}

void	buff_clear(char *buffer)
{
	int	i;

	i = 0;
	while (i < BUFFSIZE)
	{
		buffer[i] = '\n';
		i++;
	}
}

void	memory_release(int **map, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
