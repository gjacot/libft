/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_fdf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 16:43:21 by gjacot            #+#    #+#             */
/*   Updated: 2016/10/11 16:43:22 by gjacot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		ft_cmptab(const char *s)
{
	int		k;
	int		i;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && (s[i] < '0' || s[i] > '9'))
			i++;
		while (s[i] && s[i] >= '0' && s[i] <= '9')
			i++;
		k++;
	}
	if (s[i - 1] < '0' || s[i - 1] > '9')
		k--;
	return (k);
}

static int		ft_cmplen(const char *s, int index)
{
	int		cmp;

	cmp = 0;
	index--;
	while (s[++index] && s[index] >= '0' && s[index] <= '9')
		cmp++;
	return (cmp);
}

char			**ft_strsplit_fdf(const char *s)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (s == NULL)
		return (NULL);
	if (!(tab = (char **)ft_malloc(sizeof(char *) * (ft_cmptab(s) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] && (s[i] < '0' || s[i] > '9'))
			i++;
		if (s[i] && !(tab[k] = (char *)malloc(ft_cmplen(s, i) + 1)))
			return (NULL);
		while (s[i] && s[i] >= '0' && s[i] <= '9')
			tab[k][j++] = s[i++];
		if (j != 0)
			tab[k++][j] = '\0';
	}
	tab[k] = NULL;
	return (tab);
}
