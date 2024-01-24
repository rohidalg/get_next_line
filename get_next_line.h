/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:23:36 by rohidalg          #+#    #+#             */
/*   Updated: 2024/01/24 16:26:14 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 42
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
#include <fcntl.h>

extern char *get_next_line(int fd);
extern char *ft_read_line(int fd, char *str);
extern char	*ft_strchr(const char *s, int c);
extern int	ft_strlen(char const *s);
extern char	*ft_strjoin(char const *s1, char const *s2);

#endif