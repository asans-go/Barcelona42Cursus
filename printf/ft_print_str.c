/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:26:48 by asans-go          #+#    #+#             */
/*   Updated: 2023/11/29 13:39:27 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str, int *count)
{
	int		aux;
	int		i;

	i = 0;
	aux = 0;
	if (!str)
		return (write (1, "(null)", 6));
	while (*str != '\0')
	{
		aux = ft_print_char(*str);
		if (aux == -1)
			return (-1);
		str++;
		i++;
	}
	return (*count + i);
}
