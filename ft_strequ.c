/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:40:41 by magerber          #+#    #+#             */
/*   Updated: 2019/05/30 10:52:42 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (ft_strlen(s1) == ft_strlen(s2))
	{
		while (s1[i])
		{
			if (s1 != s2)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
