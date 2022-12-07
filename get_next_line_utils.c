/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avast <avast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:51:51 by avast             #+#    #+#             */
/*   Updated: 2022/12/07 19:52:27 by avast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_strchr_gnl(char *s, int c)
{
	if (s == 0)
		return (0);
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return (1);
	return (0);
}

char	*ft_substr_gnl(char *s, unsigned long int start, unsigned long int len)
{
	char		*str;
	long int	size;
	long int	i;

	if (s == 0)
		return (0);
	if (start > ft_strlen(s) || len == 0)
		return (ft_calloc(1, 1));
	if (ft_strlen(s) - start < len)
		size = ft_strlen(s) - start;
	else
		size = len;
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
	{
		free(s);
		return (0);
	}
	i = -1;
	while (++i < size)
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}
