/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 09:49:22 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/03 09:56:44 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s = malloc(i + j + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		s[k] = s2[j];
		k++;
		j++;
	}
	s[k] = '\0';
	return (s);
}
