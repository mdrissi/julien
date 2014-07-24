/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtouzeau <jtouzeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/23 11:23:58 by jtouzeau          #+#    #+#             */
/*   Updated: 2014/07/24 02:45:11 by jtouzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int ac, char **av)
{
	char	**tab;
	t_map	*search;
	int		i;

	ac=ac;
	i = 0;
	search = malloc(sizeof(*search));
	if (search == NULL)
		return (0);
	search->x = 0;
	search->y = 0;
	search->size = 0;
	if ((tab = get_data(av[1])) == NULL)
		return (0);
	size_up_carre(tab, 0, 0, search);
	aff_tab(tab, search);
	while (tab[i] != 0)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
