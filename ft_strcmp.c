/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:17:31 by magerber          #+#    #+#             */
/*   Updated: 2019/05/23 16:55:19 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	unsigned char c1;
	unsigned char c2;
	
	c1 = *str1;
	c2 = *str2;
	while (c1 == c2)
	{
		c1 = *str1++;
		c2 = *str2++;
		if (c1 == '\0')
			return (c1 - c2);
	}
	return (c1- c2);
}
