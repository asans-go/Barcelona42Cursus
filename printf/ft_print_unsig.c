/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:52:09 by asans-go          #+#    #+#             */
/*   Updated: 2023/11/29 14:08:45 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsig(unsigned int n, unsigned int base)
{
	int		count;
	char	*symbol;

	count = 0;
	symbol = "0123456789";
	if (n < base)
		return (count + ft_print_char(symbol[n]));
	else
	{
		count = ft_print_digit(n / base, base);
		return (count + ft_print_digit(n % base, base));
	}
}
