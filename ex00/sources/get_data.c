/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtouzeau <jtouzeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/23 23:25:14 by jtouzeau          #+#    #+#             */
/*   Updated: 2014/07/24 04:22:25 by jtouzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char		**get_data(char *link)
{
	int		fd;
	char	*line;
	char	**data;
	int		size;
	int		j;

	fd = open(link, O_RDONLY);
	if(fd == -1)
		exit (0);
	if ((line  = get_next_line(fd)) == NULL)
		exit (0);
	size =  ft_atoi(line);
	if (size <= 0)
		exit (0);
	data = malloc((size + 1) * sizeof(*data));
	if (data == NULL)
		return (0);
	j = 0;
	while (j < size && (line = get_next_line(fd)) != NULL)
    {
		data[j] = ft_strdup(line);
		free(line);
		j++;
    }
	data[j] = NULL;
	return (data);
}
