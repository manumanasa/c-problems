/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:52:33 by mputsala          #+#    #+#             */
/*   Updated: 2016/12/19 12:25:11 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		unsigned_char;
	int		number;

	number = 0;
	unsigned_char = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			unsigned_char = -1;
		str++;
	}
	while ((str[0] >= 48 && str[0] <= 57))
	{
		number = number * 10 + (str[0] - '0');
		str++;
	}
	return (number * unsigned_char);
}
