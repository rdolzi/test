/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:41:03 by rdolzi            #+#    #+#             */
/*   Updated: 2023/10/16 17:52:49 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../so_long.h"

void check_args(int argc)
{
    if (argc != 2)
        exit(write(1, "Error\nargc != 2", 15) - 14);
}

void check_ber(char *file)
{
    int i;

    i = ft_strlen(file);
    if (!(file[i - 1] == 'r' && file[i - 2] == 'e' && file[i - 3] == 'b' && file[i - 4] == '.'))
        exit(write(1, "Error\nFormat file is invalid", 28) - 27);
}

void check_rectangular(char *file)
{
    (void)file;    
}

void check_walls(char *file)
{
    (void)file;
}

void check_cpe(char *file)
{
    (void)file;
}

void check(int argc, char **argv)
{
    check_args(argc);
    check_ber(argv[1]);
    check_rectangular(argv[1]);
    check_walls(argv[1]);
    check_cpe(argv[1]);
}
