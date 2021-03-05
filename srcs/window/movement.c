/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:40:20 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/03/05 21:29:15 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** Funcionees de movimiento del jugador
*/
void	movement(t_cub3d *cub)
{
	move_forward(cub);
	move_sideways(cub);
//	if (cub->move.escape == 1)
//		print_error("cub3d Cerrado\n");
}

void	set_plan_position(t_cub3d *cub, double x, double y)
{
	if (cub->plan.plan[(int)cub->p.posy][(int)x] == '0')
		cub->p.posx = x;
	if (cub->plan.plan[(int)y][(int)cub->p.posx] == '0')
		cub->p.posy = y;
}

void move_forward(t_cub3d *cub)
{
	double	pos_x;
	double	pos_y;
	double  speed;

	speed = MV_SPEED * cub->ctrl.forward;
	pos_x = cub->p.posx + cub->p.dirx * speed;
	pos_y = cub->p.posy + cub->p.diry * speed;
	set_plan_position(cub, pos_x, pos_y);
}

void	move_sideways(t_cub3d *cub)
{
	double	pos_x;
	double	pos_y;
	double  speed;

	speed = MV_SPEED * cub->ctrl.sideways;
	pos_x = cub->p.posx - cub->p.diry * speed;
	pos_y = cub->p.posy + cub->p.dirx * speed;
	set_plan_position(cub, pos_x, pos_y);
}
