/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 10:52:55 by mputsala          #+#    #+#             */
/*   Updated: 2016/12/14 11:13:01 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	else
	{
		while (i < size)
		{
			str[i] = 0;
			i++;
		}
	}
	return (str);
}
