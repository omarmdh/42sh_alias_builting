/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:54:08 by ommadhi           #+#    #+#             */
/*   Updated: 2020/11/03 20:05:11 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		ft_is_sep(char c)
{
	if (c == ';' || c == ' ' || c == '\t' || c == '\n' || c == '|' || c == '&')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	char *ptr;
	int i;
	int sq;
	int	dq;

	dq = 0;
	sq = 0;
	i = 0;
	ptr = ft_strchr(ft_strstr(av[1], av[2]), ' ') + 1;
	while (ptr[i])
	{
		if (ptr[i] == 34)
			dq++;
		if (ptr[i] == 39)
			sq++;
		if ((ft_is_sep(ptr[i]) && sq != 0 && sq % 2 == 0) || (ft_is_sep(ptr[i]) && sq == 0))
		{
			ft_strclr(&ptr[i]);
			break ;
		}
		if (!ptr[i + 1])
			return (404);
		i++;
	}
	ft_putendl(ptr);
}
