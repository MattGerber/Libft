/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:56:36 by magerber          #+#    #+#             */
/*   Updated: 2019/05/21 15:13:06 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int	i;
	int j;

	i = 0;
	j = 0;

	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}

	if (str[j] == c)
		return (char*)&(str[j]);
	else 
		return (NULL);
}
