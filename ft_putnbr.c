/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 11:49:50 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/03 14:25:36 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putchar(char c);
void		ft_putstr(char const *s);

void		ft_putnbr(int n)
{
	if (n > 2147483647 || n < -2147483648)
	   return;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return;
	}
	if (n < 0)
	{
		n = n * -1;
		ft_putchar ('-');
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
		return;
	}
	ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return;
}
