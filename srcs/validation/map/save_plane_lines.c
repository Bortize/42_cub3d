/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_plane_lines.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 13:58:05 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/12/30 13:58:20 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../headers/cub3d.h"

int	save_plane_lines(char *str, map_plan *plan)
{
	plan->one_line_plan = ft_strjoin(plan->one_line_plan, str);
	plan->one_line_plan = ft_strjoin(plan->one_line_plan, "p");
	ft_printf("Concatenation Linea %s \n", plan->one_line_plan);
	return (0);
}
