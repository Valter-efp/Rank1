/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:05:44 by vafernan          #+#    #+#             */
/*   Updated: 2024/04/24 13:50:46 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putnbr(int nbr);
int	ft_putnbrhex(unsigned int nbr, const char c);
int	ft_putptr(unsigned long nbr);
int	ft_putstr(char *str);
int	ft_utoa(unsigned int nbr);

#endif