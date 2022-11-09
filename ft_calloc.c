/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avast <avast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:49:38 by avast             #+#    #+#             */
/*   Updated: 2022/11/09 13:05:03 by avast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*tab;
	long long int	mem;
	long long int	i;

	if (nmemb == 0 && size == 0)
	{
		tab = malloc(1);
		if (!tab)
			return (0);
		return (tab);
	}
	if (nmemb == 0 || size == 0)
		return (0);
	i = 0;
	mem = nmemb * size;
	tab = malloc(mem);
	if (!tab)
		return (0);
	i = 0;
	while (i < mem)
	{
		*((unsigned char *)tab + i) = 0;
		i++;
	}
	return (tab);
}
