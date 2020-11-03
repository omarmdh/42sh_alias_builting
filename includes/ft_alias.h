/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alias.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:38:02 by ommadhi           #+#    #+#             */
/*   Updated: 2020/11/03 18:58:50 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALIAS_H
#define FT_ALIAS_H

#include "ft_readline.h"
#include "sh.h"
#include "ft_autocmp.h"

typedef struct s_alias
{
	char		*alias;
	char		*value;
	s_alias		*next;
}				t_alias;

void			ft_alias(t_alias **aliases, char	*cmd);

#endif
