/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvonesch <cvonesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 03:35:12 by cvonesch          #+#    #+#             */
/*   Updated: 2014/07/24 04:52:45 by jtouzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "bsq.h"

int			modify_x(char	**tab, int	x, int	y)
{
	int		taille;

	taille = 0;
	while (tab[y] != NULL && tab[y][x] != '\0' && tab[y][x] != 'o')
	{
		x++;
		taille++;
	}
	return (taille);
}

int			modify_y(char	**tab, int	x, int	y, int	max)
{
	int		taille;

	taille = 0;
	while (tab[y] != NULL && tab[y][x] != 0 && tab[y][x] != 'o')
	{
		y++;
		taille++;
		if (taille > max)
			return (taille);
	}
	return (taille);
}

int			what_square(char	**tab, int	x, int	y, int	size)
{
	int		size_up;
	int		x_modif;
	int		y_modif;
	int		pos;

	x_modif = modify_x(tab, x, y);
	size_up = size;
	size = 0;
	pos = 0;
	if (x_modif > 0 && x_modif < size)
		return (size_up);
	while (pos < x_modif && x_modif > size)
	{
		y_modif = modify_y(tab, x + pos, y, x_modif);
		if (pos <= y_modif && y_modif > size)
			size++;
		if (y_modif < x_modif)
			x_modif = y_modif;
		pos++;
	}
	if (size > size_up)
		return (size);
	else
		if (size - 1 >= 0 && size > 2)
			return (size - 1);
		else
			return (0);
}
