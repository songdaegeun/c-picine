/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_bsq.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:37:35 by dasong            #+#    #+#             */
/*   Updated: 2023/03/02 05:37:42 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCH_BSQ_H
# define SEARCH_BSQ_H
# include "../includes/map_info.h"

int		min(int a, int b, int c);
void	fill_map_calc(t_map_info info, int **map_calc);
void	draw_square(t_map_info *info, int max_len, int max_i, int max_j);
void	find_biggest_square(t_map_info *info, int **map_calc);
void	draw_biggest_square(t_map_info *info);

#endif
