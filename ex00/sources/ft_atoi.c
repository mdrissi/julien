/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtouzeau <jtouzeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 16:46:01 by jtouzeau          #+#    #+#             */
/*   Updated: 2014/07/24 02:40:22 by jtouzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_atoi(char	*str)
{
	int	tmp;

	tmp = 0;
	if (*str == '-')
		return (-ft_atoi(str + 1));
	if (*str == '+')
		return (ft_atoi(str + 1));
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			tmp *= 10;
			tmp += *str - '0';
		}
		else
			return (tmp);
		str++;
	}
	return (tmp);
}
