/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:40:09 by magerber          #+#    #+#             */
/*   Updated: 2019/05/27 12:48:34 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return (char *)haystack;
	while ((len) && (*haystack))
	{
		if (*haystack == needle[i])
		{
			while (needle[i])
			{
				if (*(haystack + i) != needle[i])
					break ;
				else
					i++;
				if (i == ft_strlen(needle))
					return ((char *)haystack);
				len--;
			}
			i = 0;
		}
		len--;
		haystack++;
	}
	return (NULL);
}
