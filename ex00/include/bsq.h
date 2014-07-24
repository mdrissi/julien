/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtouzeau <jtouzeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/23 22:25:07 by jtouzeau          #+#    #+#             */
/*   Updated: 2014/07/24 03:32:55 by cvonesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# define BUFFER_SIZE 10000
# define READ_SIZE 4005

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_map
{
	int			x;
	int			y;
	int			size;
}				t_map;

int				ft_atoi(char	*str);
void			ft_putnbr(int	nb);
void			ft_putchar(char	c);
void			ft_putstr(char	*str);
char			*ft_strdup(char	*s1);
int				ft_strlen(char	*str);
char			*get_next_line(const	int	fd);
void			aff_tab(char	**tab, t_map	*search);
void			ft_putstrtab(char	**tab);
char			**get_data(char	*link);
int				size_up_carre(char  **tab, int  x, int  y, t_map    *search);
int				modify_x(char	**tab, int	x, int	y);
int				modify_y(char   **tab, int  x, int  y, int	size);
int				what_square(char    **tab, int  x, int  y, int  size);
t_map			*other_sqr(int x, int y, int size, t_map *search);

#endif
