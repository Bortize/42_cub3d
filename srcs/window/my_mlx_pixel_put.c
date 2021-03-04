/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_pixel_put.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:40:03 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/03/04 00:16:35 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/cub3d.h"
/*
** Dibuja todos los pixels en el buffer para que tengas tu frame listo para
** ser enviado a la ventana
*/
void	my_mlx_pixel_put(t_cub3d *cub, int x, int y, int color)
{
	char	*dst;

	dst = cub->graphic.addr + (y * cub->graphic.line_length + x * (cub->graphic.bpp / 8));
	*(unsigned int*)dst = color;
}
