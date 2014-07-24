/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtouzeau <jtouzeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/23 23:52:00 by jtouzeau          #+#    #+#             */
/*   Updated: 2014/07/24 04:47:08 by jtouzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	aff_tab(char	**tab, t_map *search)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		if (i < search->y || i > (search->y + search->size))
			ft_putstr(tab[i]);
		else
			while (tab[i][j])
			{
				if ((j >= search->x && j < search->x + search->size) &&
					(i >= search->y && i < search->y + search->size))
					ft_putchar('x');
				else
					ft_putchar(tab[i][j]);
				j++;
			}
		ft_putchar('\n');
		i++;
	}
}
