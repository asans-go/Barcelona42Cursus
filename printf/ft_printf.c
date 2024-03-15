/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:32:42 by asans-go          #+#    #+#             */
/*   Updated: 2023/11/29 12:47:13 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		aux;

	va_start (ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			aux = ft_print_format(*(++format), ap);
		else
			aux = write(1, format, 1);
		count += aux;
		++format;
	}
	va_end(ap);
	return (count);
}

/*
int	main()
{
	int	meu = 0;
	int	pro = 0;

	meu = ft_printf("%p\n", "");
	pro = printf("%p\n", "");
	printf("pointer Test: %d\n, %d\n", meu, pro);

	
}
*/
