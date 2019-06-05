/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:38:34 by magerber          #+#    #+#             */
/*   Updated: 2019/06/05 15:27:22 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
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

static char	*ft_convert(char *s, int n, int i)
{
	int c;

	c = 0;
	if (n == INTMIN)
		s = ft_strdup("-2147483648");
	else
	{
		if (n < 0)
		{
			c = 1;
			n *= -1;
			i++;
		}
		while (i > 0)
		{
			s[--i] = (n % 10 + '0');
			n = n / 10;
		}
		if (c == 1)
			s[0] = '-';
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;

	i = 0;
	if (n == 0)
	{
		s = ft_strnew(1);
		s[0] = '0';
		return (s);
	}
	if (n < 0)
	{
		if (!(s = ft_strnew((ft_size(n) + 1))))
			return (NULL);
	}
	else if (!(s = ft_strnew((ft_size(n)))))
		return (NULL);
	s = ft_convert(s, n, ft_size(n));
	return (s);
}
