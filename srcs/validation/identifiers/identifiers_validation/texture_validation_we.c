/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_validation_we.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 15:11:23 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/03/16 16:04:42 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	texture_validation_we(t_cub3d *cub)
{
	path_validation(cub->map.tab[1]);
	if (cub->map.flag_we == 0)
	{
		cub->map.flag_we++;
		cub->map.i++;
		cub->map.we = ft_strdup(cub->map.tab[1]);
	}
	else
	{
		print_error("The '.cub' file contains identifiers "
			"duplicates. \n Please enter a valid file\n");
	}
}
