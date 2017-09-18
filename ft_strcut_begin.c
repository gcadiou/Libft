/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut_begin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 10:35:24 by gcadiou           #+#    #+#             */
/*   Updated: 2017/09/18 11:29:33 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcut_begin(char *s, int i)
{
	char	*new;

	new = ft_strnew(ft_strlen(s) - i + 1);
	while (s[i])
	{
		new[i - 1] = s[i];
		i++;
	}
	new[i] = '\0';
	free(s);
	return (new);
}
