/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtouzeau <jtouzeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 13:46:53 by jtouzeau          #+#    #+#             */
/*   Updated: 2014/07/24 02:36:51 by jtouzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char		*ft_strdup(char	*src)
{
	int		count;
	char	*s;

	count = 0;
	while (src[count])
		count++;
	s = malloc(sizeof(char) * count);
	count = 0;
	while (src[count])
	{
		s[count] = src[count];
		count++;
	}
	s[count + 1] = '\0';
	return (s);
}
