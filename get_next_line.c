/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:27:18 by mvachera          #+#    #+#             */
/*   Updated: 2023/06/02 15:48:06 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	process_buf(int fd, char *stash, char **buf)
{
}

char	*get_next_line(int fd)
{
	static char	buf[buffer_size + 1];
	char	*stash;
	size_t		byte;

	if (!stash || !fd)
		return (NULL);
	stash += ft_strdup(buf);
	while (*stash != '\0' && *stash != '\n')
	{
		byte = read(fd, buf, n);
		if (byte == 0)
			return (NULL);
		else if (byte == -1)
		{
			return (NULL);
		}
		stash += n;
	}
	return (stash);
}
