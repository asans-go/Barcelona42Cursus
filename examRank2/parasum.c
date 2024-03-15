/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:37:41 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/12 16:46:59 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnb(int i)
{
	char	c;

	if (i > 9)
	{
		putnb(i/10);
	}
	c = (i % 10) + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if(argc > 0)
	{
		while (argv[j++])
		{
			i++;
		}
	}
	putnb(i);
	write(1, "\n", 1);
	return (0);
}


