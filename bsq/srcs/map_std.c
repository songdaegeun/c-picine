/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_std.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 07:39:43 by dasong            #+#    #+#             */
/*   Updated: 2023/03/02 07:39:45 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../includes/string_cal.h"
#include "../includes/process.h"
#include "../includes/map_info.h"

int	alloc_map(t_map_info *map_info, char *buff, int *i, int *j)
{
	while (buff[(*j)] != '\n')
	{
		if (buff[(*j)] == map_info->empty)
			map_info->map[(*i)][(*j)] = 1;
		else if (buff[(*j)] == map_info->obs)
			map_info->map[(*i)][(*j)] = 0;
		else
			return (1);
		(*j)++;
	}
	return (0);
}

int	set_map_std(t_map_info *map_info, char *buff, int pre_line_len)
{
	int		i;
	int		j;
	int		line_len;

	i = -1;
	while (++i < map_info->size_y)
	{
		buff_clear(buff);
		read(0, buff, BUFFSIZE);
		line_len = str_len_to_newline(buff);
		if (i != 0 && line_len != pre_line_len)
			return (1);
		map_info->map[i] = (int *)malloc(sizeof(int) * line_len);
		j = 0;
		if (alloc_map(map_info, buff, &i, &j))
			return (1);
		pre_line_len = line_len;
	}
	map_info->size_x = j;
	return (0);
}

int	make_map_std(t_map_info *map_info)
{
	char	*buff;
	int		line_len;

	buff = (char *)malloc(sizeof(char) * BUFFSIZE);
	read(0, buff, BUFFSIZE);
	line_len = str_len_to_newline(buff);
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
	map_info->map = (int **)malloc(sizeof(int *) * map_info->size_y);
	if (set_map_std(map_info, buff, 0))
		if (map_error(buff))
			return (1);
	free(buff);
	return (0);
}
