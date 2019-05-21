/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:17:30 by magerber          #+#    #+#             */
/*   Updated: 2019/05/21 18:12:27 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;

	while (*haystack)
	{
		if (*haystack == needle[i])
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
		haystack++;
	}
	return (NULL);
}

int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return(0);
}
