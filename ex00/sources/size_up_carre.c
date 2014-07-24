/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_up_carre.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtouzeau <jtouzeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 00:32:12 by jtouzeau          #+#    #+#             */
/*   Updated: 2014/07/24 03:37:52 by cvonesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		size_up_carre(char	**tab, int	x, int	y, t_map	*search)
{
	int	new_size;

	while (tab[y] != 0 && tab[y + search->size] != 0)
	{
		new_size = what_square(tab, x, y, search->size);
		if (new_size > search->size)
			other_sqr(x, y, new_size, search);
		if (tab[y][x + 1] == 0 || (x + new_size + 1) == 0)
		{
			y++;
			x = 0;
		}
		else
			x += new_size + 1;
	}
	return (0);
}
