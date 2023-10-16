/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:15:36 by vpalacio          #+#    #+#             */
/*   Updated: 2023/10/16 17:21:55 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	fai_cose(int keycode, t_game *ciao)
{
	if (keycode == S || keycode == DOWN)
	{
		ciao->y +=50;
		mlx_put_image_to_window(ciao->mlx, ciao->mlx_window, ciao->image, ciao->x, ciao->y);
	}
	if (keycode == D || keycode == RIGHT)
	{
		ciao->x +=50;
		mlx_put_image_to_window(ciao->mlx, ciao->mlx_window, ciao->image, ciao->x, ciao->y);
	}
	if (keycode == W || keycode == UP)
	{
		ciao->y -=50;
		mlx_put_image_to_window(ciao->mlx, ciao->mlx_window, ciao->image, ciao->x, ciao->y);
	}
	if (keycode == A || keycode == LEFT) 
	{
		ciao->x -=50;
		mlx_put_image_to_window(ciao->mlx, ciao->mlx_window, ciao->image, ciao->x, ciao->y);
	}
	else if (keycode == ESC)
		exit(write(1, "Player left the game!", 21) * 0);
	return (0);
}

int	exit_x(void)
{
	write(1, "Player exited the game!", 23);
	exit (0);
} 

// int	main(void)
// {
// 	t_game	pippo;
// 	// void	*sakura;
// 	// void	*baby;
// 	// void	*byebye;
// 	int		i;
// 	int		j;

// 	pippo.x = 100;
// 	pippo.y = 100;
// 	pippo.mlx = mlx_init();
// 	pippo.mlx_window = mlx_new_window(pippo.mlx, 1200, 1000, "so_long");
// 	pippo.image = mlx_xpm_file_to_image(pippo.mlx, "images/player.xpm", &i, &j);
// 	mlx_put_image_to_window(pippo.mlx, pippo.mlx_window, pippo.image, 30, 30);
// 	mlx_put_image_to_window(pippo.mlx, pippo.mlx_window, pippo.image, 100, 104);
// 	// sakura = mlx_xpm_file_to_image(pippo.mlx, "images/sakura.xpm", &i, &j);
// 	// mlx_put_image_to_window(pippo.mlx, pippo.mlx_window, sakura, 200, 100);
// 	// baby = mlx_xpm_file_to_image(pippo.mlx, "images/baby.xpm", &i, &j);
// 	// mlx_put_image_to_window(pippo.mlx, pippo.mlx_window, baby, 300, 500);
// 	// byebye = mlx_xpm_file_to_image(pippo.mlx, "images/byebye.xpm", &i, &j);
// 	// mlx_put_image_to_window(pippo.mlx, pippo.mlx_window, byebye, 500, 400);
// 	mlx_key_hook(pippo.mlx_window, fai_cose, &pippo);
// 	mlx_hook(pippo.mlx_window, 17, 0, exit_x, &pippo);
// 	mlx_loop(pippo.mlx);
// }

int main(int argc, char **argv)
{
	t_game game;

	(void)game;
	check(argc, argv);
	// parse(argv, &game);
	// execute(&game);
}