/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongkli <seongkli@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:18:36 by seongkli          #+#    #+#             */
/*   Updated: 2023/03/02 05:43:10 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/map_info.h"
#include "../includes/map_file.h"
#include "../includes/map_std.h"
#include "../includes/process.h"
#include "../includes/search_bsq.h"
#include <stdlib.h>

void	__leak(void)
{
	system("leaks bsq");
}

int	main(int argc, char **argv)
{
	int			i;
	t_map_info	map_info;

	if (argc != 1)
	{
		i = 1;
		while (i < argc)
		{
			if (make_map_file(argv[i++], &map_info))
				continue ;
			draw_biggest_square(&map_info);
			display(map_info);
			i++;
		}
	}
	else
	{
		if (make_map_std(&map_info))
			return (0);
		draw_biggest_square(&map_info);
		display(map_info);
	}
	atexit(__leak);
	return (0);
}
