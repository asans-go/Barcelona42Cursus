/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:31:31 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/11 19:16:45 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int num;
	int is_neg;

	num = 0;
	is_neg = 0;
	if (*str == '-')
	{
		is_neg = 1;
		str++;
	}
	while (*str && (*str >= '0' && *str <='9'))
	{
		num *= 10;
		num += (*str - '0');
		str++;
	}
	if (is_neg)
		return (-num);
	else
		return (num);
}

void ft_putnbr(int nb)
{
	char mod;

	mod = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		mod = (nb % 10) + 48;
		ft_putnbr(nb / 10);
		write(1, &mod, 1);
	}
	else
	{
		mod = (nb % 10) + 48;
		write(1, &mod, 1);
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		int num1;
		int num2;

		num1 = ft_atoi(av[1]);
		num2 = ft_atoi(av[3]);
		if(av[2][0] == '+')
			ft_putnbr(num1 + num2);
		else if	(av[2][0] == '-')
			ft_putnbr(num1 - num2);
		else if(av[2][0] == '*')
			ft_putnbr(num1 * num2);
		else if(av[2][0] == '/')
			ft_putnbr(num1 / num2);
		else if(av[2][0] == '%')
			ft_putnbr(num1 % num2);
	}
	write(1, "\n", 1);
	return (0);
}
/*
 *
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (atoi(argv[1]) + (atoi(argv[3]))));
		else if (argv[2][0] == '-')
			printf("%d", (atoi(argv[1]) - (atoi(argv[3]))));
		else if (argv[2][0] == '*')
			printf("%d", (atoi(argv[1]) * (atoi(argv[3]))));
		else if (argv[2][0] == '/')
			printf("%d", (atoi(argv[1]) / (atoi(argv[3]))));
		else if (argv[2][0] == '%')
			printf("%d", (atoi(argv[1]) % (atoi(argv[3]))));
	}
	printf("\n");
	return(0);
} */
