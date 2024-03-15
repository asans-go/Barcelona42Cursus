/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:41:59 by asans-go          #+#    #+#             */
/*   Updated: 2023/11/29 14:04:04 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, unsigned int base, char x_or_X)
{
	int		count;
	char	*symbols;

	count = 0;
	if (x_or_X == 'x')
		symbols = "0123456789abcdef";
	else
		symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		return (ft_print_hex(-n, base, x_or_X) + 1);
	}
	else if (n < base)
	{
		if (ft_print_char(symbols[n]) == -1)
			return (-1);
		return (1);
	}
	else
	{
		count = ft_print_hex(n / base, base, x_or_X);
		return (count + ft_print_hex(n % base, base, x_or_X));
	}
}
