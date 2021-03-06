/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reading.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 18:55:06 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/03/20 02:49:39 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

inline static void	parse(t_cub3d *cub, char *line)
{
	if (cub->map.i < 8)
		find_identifiers(line, cub);
	else if (cub->map.i == 8)
	{
		validate_plan(line, cub);
		if (line[0] != '\0')
			save_plane_lines(line, cub);
	}
}

/*
** Read the .map file line by line to identify if it
** contains the values to be collected
*/

int					file_reading(int fd, t_cub3d *cub)
{
	char	*line;
	int		i;

	i = 0;
	while (get_next_line(fd, &line))
	{
		parse(cub, line);
		free(line);
	}
	parse(cub, line);
	free(line);
	if (cub->p.flag_found_player == 0)
		print_error("Not found player in the map \n");
	if (cub->p.count_found_player > 1)
		print_error("There can only be 1 player. Check your plan \n");
	cub->zbuffer = malloc(sizeof(double) * cub->map.width);
	if (cub->map.i < 8)
		print_error("Missing identifiers, check your map \n");
	if (cub->plan.values_ok == 0)
		assigning_plane_values(cub);
	return (0);
}
