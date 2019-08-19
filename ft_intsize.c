/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:20:19 by magerber          #+#    #+#             */
/*   Updated: 2019/06/10 17:26:37 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intsize(int n)
{
	int size;

	size = 0;
	if (n < 0)
		n *= -1;
	while (n >= 1)
	{
		size++;
		n /= 10;
	}
	return (size);
}