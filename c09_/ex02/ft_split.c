/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasong <dasong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:37:02 by dasong            #+#    #+#             */
/*   Updated: 2023/02/24 03:02:17 by dasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_sep(char ch, char *match)
{
	int	i;

	i = 0;
	while (match[i])
	{
		if (ch == match[i])
			return (1);
		i++;
	}
	return (0);
}

int	pass_sep(char *str, char *match, int *ex_i)
{
	int	i;
	int	check_sep;

	i = 0;
	check_sep = 0;
	while (is_in_sep(str[i], match))
	{
		check_sep = 1;
		i++;
	}
	*ex_i += i;
	return (check_sep);
}

int	pass_word(char *str, char *match, int *ex_i)
{
	int	check_wd;

	check_wd = 0;
	while (!is_in_sep(str[*ex_i], match) && str[*ex_i])
	{
		check_wd = 1;
		(*ex_i)++;
	}
	return (check_wd);
}

void	s_cpy(char **p_strs, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!is_in_sep(str[i], charset))
		{
			len = 0;
			while (!is_in_sep(str[i + len], charset) && str[i + len])
				len++;
			p_strs[j] = (char *)malloc(sizeof(char) * (len + 1));
			k = 0;
			while (!is_in_sep(str[i], charset) && str[i])
				p_strs[j][k++] = str[i++];
			p_strs[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**p_strs;
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (pass_word(str, charset, &i) == 1)
			count++;
		else
			i++;
	}
	p_strs = (char **)malloc(sizeof(char *) * (count + 1));
	if (!p_strs)
		return (0);
	p_strs[count] = (void *)0;
	if (!*str)
		return (p_strs);
	s_cpy(p_strs, str, charset);
	return (p_strs);
}

// #include <stdio.h>
// int main()
// {
// 	char arr1[100] = "hello world";
// 	char arr2[100] = " ";
// 	int i;
// 	char **av;

// 	i = -1;
// 	av = ft_split(arr1, arr2);
// 	while(++i < 2)
// 		printf("%s\n", av[i]);

// 	printf("%s\n", (ft_split("XDh hm\
//  tKVDOoAtPM76YdXMLiYhQ8y3Bqvr3pytn
//  KT1EA", ""))[0]);
// 	printf("%s\n", (ft_split("XDh hm\
//  tKVDOoAtPM76YdXMLiYhQ8y3Bqvr3pytn
//  KT1EA", ""))[1]);
// 	printf("---------------\n");
// 	printf("%s\n", (ft_split(",,abc.,cd, ef,", ",.")[0]));
// 	printf("%s\n", (ft_split(",,abc.,cd, ef,", ",.")[1]));
// 	printf("%s\n", (ft_split(",,abc.,cd, ef,", ",.")[2]));
// 	printf("%s\n", (ft_split(",,abc.,cd, ef,", ",.")[3]));
// 	printf("%s\n", (ft_split("", "d")[0]));
// 	char str[5] = {'0', '1', '2', '3', '\0'};
// 	printf("%s\n", str);
// }
