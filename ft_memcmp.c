/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:00:54 by magerber          #+#    #+#             */
/*   Updated: 2019/05/23 16:27:26 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char *s1;
	const unsigned char *s2;
	unsigned char c1;
	unsigned char c2;

	s1 = str1;
	s2 = str2;
	c1 = 0;
	c2 = 0;
	while (c1 == c2 && n)
	{
		c1 = (unsigned char)s1++;
		c2 = (unsigned char)s2++;
		if (s1 == '\0')
			return (c1 - c2);
		n--;
	}
	return (c1 - c2);
}
