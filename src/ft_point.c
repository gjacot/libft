/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 16:43:11 by gjacot            #+#    #+#             */
/*   Updated: 2016/10/11 16:43:13 by gjacot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_point(t_pos map_3d, t_pos map_3d_2, t_env e)
{
	if (e.p == 1)
	{
		ft_put_img(e, map_3d.x + e.move_x, map_3d.y + e.move_y);
		ft_put_img(e, map_3d_2.x + e.move_x, map_3d_2.y + e.move_y);
	}
	else
		ft_ligne(map_3d, map_3d_2, e);
}
