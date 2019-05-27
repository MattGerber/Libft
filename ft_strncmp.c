/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:01:10 by magerber          #+#    #+#             */
/*   Updated: 2019/05/27 11:09:52 by magerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char c1;
    unsigned char c2;

    c1 = *str1;
    c2 = *str2;
    while (c1 == c2 && n)
    {
        c1 = *str1++;
        c2 = *str2++;
        if (c1 == '\0')
            return (c1 - c2);
		n--;
    }
    return (c1- c2);
}
