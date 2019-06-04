/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:50:18 by magerber          #+#    #+#             */
/*   Updated: 2019/06/04 13:05:44 by magerber         ###   ########.fr       */
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
	while (s[iback - 1] == '\n' || s[iback - 1] == '\t' || s[iback - 1] == ' ')
		iback--;
	i = iback - ifront;
	if (iback < ifront)
		return ("");
	ptr = ft_strnew(i);
	ft_strncpy(ptr, (s + ifront), i);
	ptr[i] = 0;
	return (ptr);
}
