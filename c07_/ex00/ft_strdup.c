/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:22:46 by dasong            #+#    #+#             */
/*   Updated: 2023/02/23 16:01:02 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s_res;
	char	*t_src;
	int		i;

	i = 0;
	t_src = src;
	while (*t_src++)
	{
		i++;
	}
	s_res = (char *)malloc(sizeof(char) * (i + 1));
	if (!s_res)
		return (0);
	i = 0;
	while (src[i])
	{
		s_res[i] = src[i];
		i++;
	}
	s_res[i] = '\0';
	return (s_res);
}
