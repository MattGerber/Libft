/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:11:50 by magerber          #+#    #+#             */
/*   Updated: 2019/05/28 09:59:25 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char	*s, void (*f)(char *))
{
	int i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			f(&s[i]);
			i++;
		}
	}
}
