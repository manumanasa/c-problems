/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 11:54:02 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/03 09:26:27 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		pos;
	int		lth;

	i = 0;
	pos = 0;
	lth = 0;
	while (little[lth] != '\0')
		lth++;
	if (lth == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (little[pos] == big[i + pos])
		{
			if (pos == lth - 1)
				return ((char *)big + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (NULL);
}
