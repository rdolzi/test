/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:16:07 by vpalacio          #+#    #+#             */
/*   Updated: 2023/10/16 17:57:50 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./mlx/mlx.h"
#include <stdlib.h>
#include <unistd.h>
#include <mlx.h>

# define W 13
# define A 0
# define ESC 53
# define S 1
# define D 2
#define UP 126
#define DOWN 125
#define LEFT 123
#define RIGHT 124

typedef struct s_game
{
	void			*image;
	void			*mlx;
	void			*mlx_window;
	int				x;
	int				y;
}					t_game;

void check(int argc, char **argv);
size_t ft_strlen(const char *str);

#endif