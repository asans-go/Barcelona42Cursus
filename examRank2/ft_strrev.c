/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:38:44 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/03 20:43:47 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i = -1;
	int		length = 0;
	char	temp;

	while (str[length])
		lenght++;
	while (++i < length/2)
	{
		temp = str[i];
		str[i] = str[length -1 - i];
		str[length - 1 - i] = temp;
	}
	return (str);
}
