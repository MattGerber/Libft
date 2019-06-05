/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:14:42 by magerber          #+#    #+#             */
/*   Updated: 2019/06/05 12:49:44 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(const char *s, char c)
{
	int i;
	int w;

	i = 0;
	w = 0;
	while (s[i++])
	{
		if (s[i] != c)
		{
			w++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (w);
}