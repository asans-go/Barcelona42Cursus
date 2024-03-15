/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:44:38 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/03 20:49:43 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *str)
{
	int		i = 0;
	int		length = 0;
	char	*strcpy;

	while (str[length])
		lenght++;
	strcpy = malloc(sizeof(*strcpy)*(length + 1));
	if (strcpy != NULL)
	{
		while (str[i])
		{
			strcpy[i] = str[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
