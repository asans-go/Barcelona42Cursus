/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:32:46 by asans-go          #+#    #+#             */
/*   Updated: 2023/11/29 12:46:50 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char specifer, va_list ap)
{
	int	count;
	int	aux;

	count = 0;
	aux = 0;
	if (specifer == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (specifer == 's')
		count += ft_print_str(va_arg(ap, char *), &count);
	else if (specifer == 'd' || specifer == 'i')
		count += ft_print_digit(va_arg(ap, int), 10);
	else if (specifer == 'x')
		count += ft_print_hex((va_arg(ap, unsigned int)), 16, specifer);
	else if (specifer == 'X')
		count += ft_print_hex((va_arg(ap, unsigned int)), 16, specifer);
	else if (specifer == 'p')
		count += ft_print_ptr((unsigned long)va_arg(ap, void *), 16, 'x');
	else if (specifer == 'u')
		count += ft_print_unsig((va_arg(ap, unsigned int)), 10);
	else
		aux = write(1, &specifer, 1);
	count += aux;
	return (count);
}
