/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:30:02 by asans-go          #+#    #+#             */
/*   Updated: 2023/11/29 13:49:58 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(long n, unsigned int base)
{
	int		count;
	char	*symbol;

	count = 0;
	symbol = "0123456789";
	if (n < 0)
	{
		count += write(1, "-", 1);
		return (count + ft_print_digit(-n, base));
	}
	else if (n < base)
		return (ft_print_char(symbol[n]));
	else
	{
		count = ft_print_digit(n / base, base);
		return (count + ft_print_digit(n % base, base));
	}
}
