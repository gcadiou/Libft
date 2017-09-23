/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_endcpy_until.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 10:50:35 by gcadiou           #+#    #+#             */
/*   Updated: 2017/09/23 17:07:46 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_endcpy_until(char *s, char c)
{
	int		i;
	int		len;
	char	*new;

	i = ft_strlentil(s, c, 0);
	len = ft_strlen(&(s[i]));
	new = ft_memalloc(sizeof(char) * (len + 1));
	check_malloc(new, "ft_strcut_until");
	new = ft_strncpy(new, &(s[i]), len);
	return (new);
}
