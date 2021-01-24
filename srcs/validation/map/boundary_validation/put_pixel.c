
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 17:59:24 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/01/05 09:43:10 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../headers/cub3d.h"
/*
** Asigna el valor de relleno a la posicion indicada en el plano
*/
char	put_pixel(int x, int y, t_cub3d *cub3d)
{
	cub->plan.plan[x][y] = 'f';
	ft_printf("✅ El pixel se cambio a: %c \n", cub->plan.plan[x][y]);
	return (cub->plan.plan[x][y]);
}
