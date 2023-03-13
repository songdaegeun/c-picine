/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 07:45:32 by dasong            #+#    #+#             */
/*   Updated: 2023/03/02 07:45:34 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../includes/string_cal.h"
#include "../includes/process.h"
#include "../includes/map_info.h"

int	check_map(t_map_info map_info, char *buff)
{
	int	i;
	int	cnt_y;

	i = 0;
	cnt_y = 0;
	while (buff[i])
	{
		if (i == (map_info.size_x + 1) * cnt_y + map_info.size_x)
		{
			cnt_y++;
			if (buff[i] != '\n')
			{
				free(map_info.map);
				return (1);
			}
		}
		i++;
	}
	if (cnt_y != map_info.size_y || buff[(map_info.size_x + 1) * cnt_y] != '\0')
	{
		free(map_info.map);
		return (1);
	}
	return (0);
}

int	set_map(t_map_info *map_info, char *buff, int i, int j)
{
	pass_to_newline(buff, &i);
	buff = buff + i + 1;
	map_info->size_x = str_len_to_newline(buff);
	if (check_map(*map_info, buff))
		return (1);
	i = -1;
	while (++i < map_info->size_y)
	{
		map_info->map[i] = (int *)malloc(sizeof(int) * map_info->size_x);
		j = -1;
		while (++j < map_info->size_x)
		{
			if (buff[(map_info->size_x + 1) * i + j] == map_info->empty)
				map_info->map[i][j] = 1;
			else if (buff[(map_info->size_x + 1) * i + j] == map_info->obs)
				map_info->map[i][j] = 0;
			else
			{
				memory_release(map_info->map, i + 1);
				return (1);
			}
		}
	}
	return (0);
}

int	make_map_file(char *file, t_map_info *map_info)
{
	char	*buff;
	int		line_len;

	buff = (char *)malloc(sizeof(char) * BUFFSIZE);
	read(open(file, O_RDWR), buff, BUFFSIZE);
	line_len = str_len_to_newline(buff + 0);
	if (line_len < 4)
		if (map_error(buff))
			return (1);
	map_info->size_y = process_first_num(buff, line_len, 0, 1);
	if (map_info->size_y < 1)
		if (map_error(buff))
			return (1);
	map_info->empty = buff[line_len - 3];
	map_info->obs = buff[line_len - 2];
	map_info->full = buff[line_len - 1];
	if (check_symbol(map_info->empty, map_info->obs, map_info->full))
		if (map_error(buff))
			return (1);
	map_info->map = (int **)malloc(sizeof(int *) * map_info->size_y);
	if (set_map(map_info, buff, 0, 0))
		if (map_error(buff))
			return (1);
	free(buff);
	return (0);
}
