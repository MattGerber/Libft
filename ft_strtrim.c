/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:50:18 by magerber          #+#    #+#             */
/*   Updated: 2019/05/30 13:23:10 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		ifront;
	int		iback;
	int		i;
	char	*ptr;

	ifront = 0;
	i = 0;
	iback = ft_strlen(s);
	while (s[ifront] == '\n' || s[ifront] == '\t' || s[ifront] == ' ')
		ifront++;
	while (s[iback] == '\n' || s[iback] == '\t' || s[iback] == ' ')
		iback--;
	while (i < iback)
		i++;
	ptr = (char *)malloc(i * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (ifront < iback)
	{
		ptr[i] = s[ifront];
		ifront++;
		i++;
	}
	return (ptr);
}
