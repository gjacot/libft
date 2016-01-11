/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:05:22 by gjacot            #+#    #+#             */
/*   Updated: 2015/12/22 12:07:29 by gjacot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = 0;
	dst = NULL;
	dst = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (dst != NULL && s1 != NULL && s2 != NULL)
	{
		while (s1[i] != '\0')
		{
			dst[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			dst[i + j] = s2[j];
			j++;
		}
		dst[j + i] = '\0';
		return (dst);
	}
	return (NULL);
}
