/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 14:07:58 by gjacot            #+#    #+#             */
/*   Updated: 2015/12/22 16:48:36 by gjacot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstn(t_list *lst)
{
	int i;

	i = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}