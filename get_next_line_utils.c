/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:21:06 by rohidalg          #+#    #+#             */
/*   Updated: 2024/01/22 17:20:54 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_putstr_fd(char *ejemplo, int fd)
{
	size_t	i;

	i = 0;
	if (!ejemplo && ejemplo == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (ejemplo[i])
	{
		write(fd, &ejemplo[i], 1);
		i++;
	}
	return (i);
}