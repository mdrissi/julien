/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_sqr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvonesch <cvonesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 03:13:41 by cvonesch          #+#    #+#             */
/*   Updated: 2014/07/24 03:30:36 by cvonesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_map		*other_sqr(int x, int y, int size, t_map *search)
{
	search->x = x;
	search->y = y;
	search->size = size;
	return (search);
}
