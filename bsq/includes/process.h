/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:35:42 by dasong            #+#    #+#             */
/*   Updated: 2023/03/02 07:59:31 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESS_H
# define PROCESS_H
# include "../includes/map_info.h"

void	display(t_map_info map_info);
int		check_symbol(char empty, char obs, char full);
int		map_error(char *buffer);
void	buff_clear(char *buffer);
void	memory_release(int **map, int y);

#endif
