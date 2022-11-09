/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avast <avast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:55:25 by avast             #+#    #+#             */
/*   Updated: 2022/11/09 17:17:51 by avast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*ft_fill_chars(char *s, char c, char *tab)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	tab = calloc(i + 1, sizeof(char));
	if (!tab)
		return (0);
	j = 0;
	while (*s != c && *s)
	{
		tab[j] = *s;
		s++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		size;
	char	**tab;

	size = ft_count_words(s, c);
	tab = calloc(size + 1, sizeof(char *));
	if (!tab)
		return (0);
	i = 0;
	while (i < size)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
			tab[i] = ft_fill_chars(s, c, tab[i]);
		while (*s != c && *s)
			s++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
