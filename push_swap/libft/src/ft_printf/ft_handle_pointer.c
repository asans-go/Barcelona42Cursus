/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:55:23 by asans-go          #+#    #+#             */
/*   Updated: 2024/02/16 17:55:37 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	ft_handle_pointer(va_list ap)
{
	void	*n;

	n = va_arg(ap, void *);
	write(1, "0x", 2);
	return (ft_putnbr_base((unsigned long long)n, "0123456789abcdef") + 2);
}
