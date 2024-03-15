/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:25:28 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/11 18:55:58 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**s;

	i = 0;
	j = 0;
	s = malloc(1000 * sizeof(char));
	while (str[i])
	{
		if (str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
		{
			k = 0;
			s[j] = malloc(sizeof(char) * 1000);
			while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
			{
				s[j][k++] = str[i++];
			}
			s[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	s[j] = 0;
	return (s);
}

int	main(void)
{
	char	**s;
	s = ft_split(" starting and ending hola ");
	printf ("%s\n", s[0]);
	printf ("%s\n", s[1]);
	printf ("%s\n", s[2]);
	printf ("%s\n", s[3]);
	printf ("%s\n", s[4]);
	return (0);
}
