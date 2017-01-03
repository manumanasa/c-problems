/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 13:18:54 by mputsala          #+#    #+#             */
/*   Updated: 2016/12/19 13:32:31 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*dst;
	int		count;

	i = 0;
	count = 0;
	while (s[count] != '\0')
		count++;
	if (count == 0)
		return (NULL);
	dst = malloc(count + 1);
	if (dst == 0)
		return (NULL);
	while (*s != '\0')
	{
		dst[i] = (*f) (i, *s);
		i++;
		s++;
	}
	dst[i] = '\0';
	return (dst);
}
