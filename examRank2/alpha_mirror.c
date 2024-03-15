/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:13:46 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/03 20:20:22 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
		   if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			   argv[1][i] = 'Z' - argv[1][i] + 'A';
		   else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			   argv[1][i] = 'z' - argv[1][i] + 'a';
		   write(1, &argv[1][i], 1);
		   i++;
		}
		write(1, "\n",1);
	}
}
