/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:51:47 by magerber          #+#    #+#             */
/*   Updated: 2019/05/21 15:11:48 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	int		ifind;

	ifind = 0;
	
	while (str[ifind])
	{
		if (c == str[ifind])
		{
			return ((char *)&(str[ifind]));
		}
		ifind++;
	}
	return (NUll);
}

