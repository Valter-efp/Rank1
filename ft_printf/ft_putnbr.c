/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:06:40 by vafernan          #+#    #+#             */
/*   Updated: 2024/04/18 15:11:13 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	printed_chars;

	printed_chars = 0;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		printed_chars += 2;
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		printed_chars++;
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		printed_chars += ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
	printed_chars++;
	return (printed_chars);
}
