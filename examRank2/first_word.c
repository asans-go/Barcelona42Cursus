/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:38:43 by asans-go          #+#    #+#             */
/*   Updated: 2023/12/14 19:17:42 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	first_word(char *str)
{
	while (is_space(*str))
		str++;
	if (*str)
	{
		while (*str && !is_space(*str))
		{
			write(1, str, 1);
			str++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		first_word(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}

