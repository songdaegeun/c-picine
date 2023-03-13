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

#ifndef MAP_STD_H
# define MAP_STD_H
# include "../includes/map_info.h"

int	alloc_map(t_map_info *map_info, char *buff, int *i, int *j);
int	set_map_std(t_map_info *map_info, char *buff, int pre_line_len);
int	make_map_std(t_map_info *map_info);

#endif
