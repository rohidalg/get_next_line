/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:21:06 by rohidalg          #+#    #+#             */
/*   Updated: 2024/01/25 19:52:21 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s && s[i] != '\0')
		i++;
	return (i);
}
// La funcion mide la longitud del string

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

/*se utiliza para buscar la primera aparición de un carácter específico*/

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	src2;

	src2 = ft_strlen(src);
	i = 0;
	if (!dst)
    	return (0);
	if (n == 0)
		return (src2);
	while ((n - 1) > i && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src2);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
    	return (i + ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t		i;
	size_t		j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	dest = (char *)malloc(i + j + 1);
	if (!dest)
		return (0);
	ft_strlcpy(dest, s1, i + j + 1);
	ft_strlcat(dest, s2, i + j + 1);
	return (dest);
}
// Reserva (con malloc(3)) y devuelve una nueva string,
// formada por la concatenación de ’s1’ y ’s2’.

char	*ft_substr_gnl(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	lens;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	lens = ft_strlen(s);
	if (len > lens - start)
		len = lens - start;
	if (start >= lens)
		return (ft_strdup_gnl(""));
	sub = malloc(sizeof(char) * (lens + 1));
	if (sub == NULL)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
// Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
// La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’.

char	*ft_strdup_gnl(const char *s1)
{
	char	*dup;
	size_t	i;
	size_t	slengh;

	i = 0;
	slengh = ft_strlen(s1);
	dup = malloc(sizeof(char) * slengh + 1);
	if (dup == NULL)
		return (NULL);
	while (s1 && s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// La función asigna suficiente memoria para una copia de la cadena s1,
// realiza la copia y devuelve un puntero a ella.
//útil en situaciones donde necesitas trabajar con una copia independiente de la cadena  original.
