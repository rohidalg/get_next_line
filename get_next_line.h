/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:23:36 by rohidalg          #+#    #+#             */
/*   Updated: 2024/01/25 18:54:44 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

extern char		*get_next_line(int fd);
extern char		*ft_read_line(int fd, char *str);
extern char		*ft_strchr(const char *s, int c);
extern size_t	ft_strlen(char const *s);
char	*ft_strjoin(char const *s1, const char *s2);
extern char		*ft_strjoin(char const *s1, char const *s2);
//extern char		*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_substr_gnl(char const *s, unsigned int start, size_t len);
//extern char		*ft_strdup(const char *s);
extern char	*ft_strdup_gnl(const char *s1);
extern size_t	ft_strlcpy(char *dst, const char *src, size_t n);
extern size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif
