/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 11:45:36 by mputsala          #+#    #+#             */
/*   Updated: 2016/12/19 12:45:11 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = strlen(dst);
	s = strlen(src);
	i = 0;
	if (siz < d)
		return (siz + s);
	while (src[i] != '\0' && (d + i + 1) < siz)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
