/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:48:49 by asans-go          #+#    #+#             */
/*   Updated: 2023/11/29 12:06:30 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(int c);
int	ft_print_str(char *str, int *count);
int	ft_print_digit(long n, unsigned int base);
int	ft_print_hex(unsigned long n, unsigned int base, char x_or_X);
int	ft_print_ptr(unsigned long n, unsigned int base, char x_or_X);
int	ft_print_unsig(unsigned int n, unsigned int base);
int	ft_print_format(char specifer, va_list ap);

#endif
