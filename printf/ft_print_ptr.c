/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:49:56 by asans-go          #+#    #+#             */
/*   Updated: 2023/11/29 14:08:57 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long n, unsigned int base, char x_or_X)
{
	int	count;

	count = 0;
	count += write (1, "0x", 2);
	if (count == -1)
		return (-1);
	count += ft_print_hex(n, base, x_or_X);
	if (count == -1)
		return (-1);
	return (count);
}
