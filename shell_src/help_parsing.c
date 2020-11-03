/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiantrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 04:21:35 by hiantrin          #+#    #+#             */
/*   Updated: 2020/10/23 04:21:38 by hiantrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sh.h"

void	help_bonus(char *line, char **command, char s, int i)
{
	char	c;
	int		j;
	int		a;

	i = 0;
	a = 0;
	j = 0;
	while (line[i])
	{
		c = line[i];
		if (c == 34 || c == 39)
			i = norme_s_q(i, line, c);
		else if (line[i] == 92)
			i++;
		else if (c == s)
		{
			command[a++] = ft_strsub(line, j, i - j);
			j = i + 1;
		}
		if (line[i] != '\0')
			i++;
	}
	command[a] = ft_strsub(line, j, i - j);
}

int		count_command(char *line, char s)
{
	int		i;
	int		count;
	char	c;

	count = 1;
	i = 0;
	while (line[i])
	{
		c = line[i];
		if (c == 34 || c == 39)
			i = norme_s_q(i, line, c);
		else if (line[i] == 92)
			i++;
		else if (c == s)
			count++;
		if (line[i] != '\0')
			i++;
	}
	return (count);
}

char	**split_command(char *line, char s)
{
	char	**command;
	int		count;

	count = count_command(line, s);
	command = (char **)malloc(sizeof(char *) * count + 1);
	command[count] = NULL;
	help_bonus(line, command, s, count);
	return (command);
}

int		check_line(char *line)
{
	int i;

	i = 0;
	while (line[i])
	{
		if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}
