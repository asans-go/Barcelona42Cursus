/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:34:20 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/03 20:38:21 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strcspn (const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
