/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:35:49 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/03/15 01:27:21 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countchar(char *str, char c)
{
	int i;
	int u;

	i = 0;
	u = 0;
	while (str[i])
	{
		u += (str[i] == c);
		i++;
	}
	return (u);
}
