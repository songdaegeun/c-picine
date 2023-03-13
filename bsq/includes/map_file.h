/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:31:17 by dasong            #+#    #+#             */
/*   Updated: 2023/03/02 05:33:03 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_FILE_H
# define MAP_FILE_H
# include "../includes/map_info.h"

int	check_map(t_map_info map_info, char *buff);
int	set_map(t_map_info *map_info, char *buff, int i, int j);
int	make_map_file(char *file, t_map_info *map_info);

#endif
