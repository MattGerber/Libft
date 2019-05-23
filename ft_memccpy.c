/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:46:04 by magerber          #+#    #+#             */
/*   Updated: 2019/05/23 14:55:24 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memccp0y(void	*dest, const void *src, int c, size_t n)
{
	char *d;
	const char *s;

	d = dest;
	s = src;
	while (n--)
	{
		if (*d == c)
			break;
		*d++ = *s++;
	}
	return (dest);
}