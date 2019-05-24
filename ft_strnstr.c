/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:40:09 by magerber          #+#    #+#             */
/*   Updated: 2019/05/24 12:58:43 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	i = 0;

	while ((len > 0) && (*haystack))
	{
		if(*haystack == needle[i])
		{
			while (needle[i])
			{
				if (*(haystack + i) != needle[i])
					break;
				else 
					i++;
				return ((char *)haystack);
			}
			i = 0;
		}
		len --;
		haystack++;
	}
	return(NULL);
}
