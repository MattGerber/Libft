/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 17:35:14 by magerber          #+#    #+#             */
/*   Updated: 2019/05/27 17:59:00 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	int		i;

	i = 0;
	//ptr = (char *)malloc(ft_strlen(s) * sizeof(char));
	ptr = (char *)s;
	if (s == NULL)
		return (NULL);
	if (s != '\0')
	{
		ptr[i] = (*f(char)(ptr[i]));
		i++;
	}
	return (ptr);
}
