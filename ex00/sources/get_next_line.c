/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtouzeau <jtouzeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/23 23:30:49 by jtouzeau          #+#    #+#             */
/*   Updated: 2014/07/23 23:42:21 by jtouzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char			*get_next_line(const int fd)
{
	static char	buffer[READ_SIZE];
	char		*str;
	static int	i;
	static int	j;

	if ((str = malloc(BUFFER_SIZE + 1 * sizeof(char))) == 0 || BUFFER_SIZE == 0)
		return (NULL);
	i = 0;
	while (j < READ_SIZE && buffer[++j] == '\n' && buffer[j] != '\0');
	while (buffer[j] != '\0' && buffer[j] != '\n' && i != BUFFER_SIZE)
		str[i++] = buffer[j++];
	while ((i != BUFFER_SIZE && buffer[j] != '\n') || (j== 0 && i == 0))
    {
		if ((j = read(fd, buffer, READ_SIZE)) == -1 || (j == 0 && i == 0))
			return (NULL);
		buffer[j] = '\0';
		str[i] = '\0';
		if (j == 0 && i != 0)
			return (str);
		j = 0;
		while (buffer[j] != '\0' && buffer[j] != '\n' && i != BUFFER_SIZE)
			str[i++] = buffer[j++];
    }
	str[i] = '\0';
	return (str);
}
