/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 00:04:43 by dasong            #+#    #+#             */
/*   Updated: 2023/02/21 00:05:15 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void)argc;
	while (argv[0][i])
	{
		i++;
	}
	write(1, argv[0], i);
	write(1, "\n", 1);
	return (0);
}
