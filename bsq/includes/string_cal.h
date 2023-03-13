/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_cal.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:37:50 by dasong            #+#    #+#             */
/*   Updated: 2023/03/02 07:59:47 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_CAL_H
# define STRING_CAL_H

int		str_len_to_newline(char *str);
void	pass_to_newline(char *buff, int *i);
int		process_first_num(char *str, int len, int i, int sign);

#endif
