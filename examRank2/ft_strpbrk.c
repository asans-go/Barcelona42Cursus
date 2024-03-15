/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:20:51 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/03 20:25:35 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;

	if (!s1 || !s2)
		return (0);
	while(*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == *s2[i])
				return (char*)s1;
			i++;
		}
		s1++;
	}
	return (0);
}