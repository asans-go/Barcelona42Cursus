/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:56:09 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/11 16:58:57 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char c)
{
	write(1, &c, 1);
}

int	str_nrep(char *str, char c)
{
	int	i;
	
	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		i;
	int		j;
	char	new[126];

	new[0] = '\0';
	i = 0;
	j = 0;
	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		while (str1[i])
		{
			if (str_nrep(new, str1[i]) == 0)
			{
				new[j] = str1[i];
				j++;
				new[j] = '\0';
			}
			i++;
		}
		i = 0;
		j = 0;
		while (new[i])
		{
			if (str_nrep(str2, new[i]) == 1)
			{
				write_char(new[i]);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*

#include <unistd.h>

int is_present(char *str, char c) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) {
            return 1;
        }
        i++;
    }
    return 0;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        write(1, "Usage: ./program string1 string2\n", 33);
        return 1;
    }

    char *str1 = argv[1];
    char *str2 = argv[2];

    int i = 0;
    while (str1[i] != '\0') {
        char current_char = str1[i];
        int j = 0;
        int found = 0;
        while (str1[j] != '\0' && (j < i || i == -1)) {
            if (str1[j] == current_char) {
                found = 1;
                break;
            }
            j++;
        }
        if (!found && is_present(str2, current_char)) {
            write(1, &current_char, 1);
        }
        i++;
    }

    write(1, "\n", 1);
    return 0;
}



#include <unistd.h> // Para la función write

// Función para verificar si un carácter está presente en una cadena
int is_present(char *str, char c) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) {
            return 1; // Si el carácter está presente, retorna 1
        }
        i++;
    }
    return 0; // Si el carácter no está presente, retorna 0
}

int main(int argc, char **argv) {
    // Verifica si se proporcionaron dos argumentos
    if (argc != 3) {
        return 1;
    }

    char *str1 = argv[1]; // Primera cadena de caracteres
    char *str2 = argv[2]; // Segunda cadena de caracteres

    // Itera sobre la primera cadena
    for (int i = 0; str1[i] != '\0'; i++) {
        char current_char = str1[i]; // Carácter actual de la primera cadena

        // Verifica si el carácter actual no está presente en la primera cadena
        if (!is_present(str1, current_char)) {
            // Verifica si el carácter actual está presente en la segunda cadena
            if (is_present(str2, current_char)) {
                write(1, &current_char, 1); // Escribe el carácter en la salida estándar
            }
        }
    }

    write(1, "\n", 1); // Escribe un salto de línea en la salida estándar
    return 0; // Retorna 0 para indicar que el programa finalizó exitosamente
}


int	iter(char *str, char c, int len)
{
	int	i = 0;

	while (str[i] && (i < len || len == -1))
	{
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

int	main (int argc, char **argv)
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
} */
