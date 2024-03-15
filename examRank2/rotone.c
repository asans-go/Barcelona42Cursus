/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:05:58 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/02 15:49:25 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write (1, &n, 1);
}

void	rotone(char *argv)
{
	while (*argv)
	{
		if((*argv >= 'A' && *argv <= 'Y') || (*argv >= 'a' && *argv <= 'y'))
		{
			*argv = *argv + 1 ;
			ft_putchar(*argv);
		}
		else if (*argv == 'Z' || *argv == 'z')
		{
			*argv = *argv - 25;
			ft_putchar(*argv);
		}
		else
			ft_putchar(*argv);
		argv++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		rotone (argv[1]);
	ft_putchar('\n');
	return (0);
}
