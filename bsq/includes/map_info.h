/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:33:20 by dasong            #+#    #+#             */
/*   Updated: 2023/03/02 05:35:31 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_INFO_H
# define MAP_INFO_H
# define BUFFSIZE 1000000000

typedef struct s_map_info
{
	int		size_x;
	int		size_y;
	int		**map;
	char	empty;
	char	obs;
	char	full;

}	t_map_info;

#endif
