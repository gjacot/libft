/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:35:34 by gjacot            #+#    #+#             */
/*   Updated: 2016/05/12 17:30:44 by gjacot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*b;

	b = (char *)s;
	a = 0;
	if (!s)
		return (NULL);
	while (b[a] != c && b[a] != '\0')
		a++;
	if (b[a] == c)
		return (&b[a]);
	else
		return (NULL);
}
