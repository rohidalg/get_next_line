/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:20:46 by rohidalg          #+#    #+#             */
/*   Updated: 2024/01/25 18:54:27 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_read_line(int fd, char *str)
{
    char *tmp;
    char *new_line;
    int i_bytes;

    i_bytes = 1;
    new_line = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!new_line)
        return (NULL);
    while (!str || (!ft_strchr(str, '\n') && i_bytes > 0))
    {
        i_bytes = read(fd, new_line, BUFFER_SIZE);
        if (i_bytes == -1)
        {
            free(new_line);
            free(str);
            return (NULL);
        }
        new_line[i_bytes] = '\0';
        tmp = str;
        str = ft_strjoin(str, new_line);
        free(tmp);
    }
    free(new_line);
    return (str);
}


char *ft_print(char **s)
{
    char *substr;
    char *tmp;
    int i;

    i = 0;
    tmp = *s;
    while (*s && (*s)[i] && (*s)[i] != '\n')
        i++;
    if (*s && (*s)[i] == '\n')
        i++;
    substr = ft_substr_gnl(*s, 0, i);
    *s = ft_substr_gnl(*s, i, ft_strlen((const char *)*s));
    free(tmp);
    if (!substr[0])
    {
        free(substr);
        substr = NULL;
    }
    return (substr);
}

char *get_next_line(int fd)
{
    static char *tmp;
    char *result;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    tmp = ft_read_line(fd, tmp);
    if (!tmp || !tmp[0])
    {
        free(tmp);
        tmp = NULL;
        return (NULL);
    }
    result = ft_print(&tmp);
    return (result);
}
