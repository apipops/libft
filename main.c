/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avast <avast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:23:10 by avast             #+#    #+#             */
/*   Updated: 2022/11/09 16:51:36 by avast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("----------------ft_islpha----------------------\n");
	printf("ft_islpha avec ( : %d", ft_isalpha('('));
	printf("\n");
	printf("ft_islpha avec g : %d", ft_isalpha('g'));
	printf("\n");
	printf("\n");
	
	printf("----------------ft_isdigit----------------------\n");
	printf("ft_isdigit avec 9 : %d", ft_isdigit('9'));
	printf("\n");
	printf("ft_islpha avec h : %d", ft_isdigit('h'));
	printf("\n");
	printf("\n");
	
	printf("----------------ft_isalnum----------------------\n");
	printf("ft_isalnum avec 9 : %d", ft_isalnum('9'));
	printf("\n");
	printf("ft_isalnum avec h : %d", ft_isalnum('h'));
	printf("\n");
	printf("\n");
	
	printf("----------------ft_strlen----------------------\n");
	printf("ft_strlen avec 'Hello' : %ld", ft_strlen("Hello"));
	printf("\n");
	printf("\n");
	
	printf("----------------ft_memset----------------------\n");
	char	str_memset[20] = "Hello comment ca va?";
	printf("ft_memset : %s", (char *)ft_memset(str_memset, 'A', 5));
	printf("\n");
	printf("\n");

	printf("----------------ft_memcpy----------------------\n");
	const char 	src[18] = "je suis la source";
	char		dest[25] = "hellooooooooooooooooooooo";
	printf("ft_memcpy : %s", (char *)ft_memcpy(dest, src, 10));
	printf("\n");	/*
	printf("memcpy with both 0: %s", (char *)memcpy((void *)0, (void *)0, 3));
	printf("\n");	*/
	printf("ft_memcpy with both 0: %s", (char *)ft_memcpy((void *)0, (void *)0, 3));
	printf("\n");	
	printf("\n");
	
	printf("----------------ft_memmove----------------------\n");
	const char src_move[15] = "nouveau test";
	printf("ft_memmove : %s", (char *)ft_memmove((char *)src_move + 5, src_move, 5));
	printf("\n");
	printf("\n");
	
	printf("----------------ft_strchr----------------------\n");
	const char str_strchr[19] = "hello tu vas bien?\0";
	printf("hello tu vas bien? avec 't' : %s", ft_strchr(str_strchr, 't'));
	printf("\n");
	const char str_strchr2[10] = "hello toi\0";
	printf("hello toi avec j : %s", ft_strchr(str_strchr2, 'j'));
	printf("\n");
	printf("\n");
	
	printf("----------------ft_strrchr----------------------\n");
	const char str_strrchr[30] = "hello et toi tu vas bien?\0";
	printf("hello et toi tu vas bien? avec 'e' : %s", ft_strrchr(str_strrchr, 'e'));
	printf("\n");
	const char str_strrchr2[10] = "hello toi\0";
	printf("hello toi avec j : %s", ft_strrchr(str_strrchr2, 'j'));
	printf("\n");/*
	const char *test_rchr1 = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	printf("fonction strrchr : %s", strrchr(test_rchr1, '\0'));
	printf("\n");
	printf("\n");
	const char *test_rchr2 = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	printf("fonction ft_strrchr : %s", ft_strrchr(test_rchr2, '\0')); */
	printf("\n");
	printf("\n");

/*
	printf("----------------ft_strlcat----------------------\n");
	printf("test ft_strlcat avec size = 0 et dst = 0 : %ld", ft_strlcat((void *)0, "nyan !", 0));
	printf("\n");
	printf("\n");
*/
	
	printf("----------------ft_strncmp----------------------\n");
	printf("s1 = hello / s1 = hella ? n = 5 : %d", ft_strncmp("hello", "hella", 5));
	printf("\n");
	printf("vraie fonction avec test 1? n = 1 : %d", strncmp("\200", "\0", 1));
	printf("\n");
	printf("ma fonction avec test 2? n = 1 : %d", ft_strncmp("\200", "\0", 1));
	printf("\n");

	printf("vraie fonction non ascii? n = 6 : %d", strncmp("\x12\xff\x65\x12\xbd\xde\xad", "\x12\x02", 6));
	printf("\n");
	printf("ma fonction non ascii? n = 6 : %d", ft_strncmp("\x12\xff\x65\x12\xbd\xde\xad", "\x12\x02", 6));
	printf("\n");
	printf("\n");

	printf("----------------ft_memchr----------------------\n");
	printf("hello tu vas bien? avec 't' et 10 : %s", (char *)ft_memchr("hello tu vas bien?", 't', 10));
	printf("\n");
	printf("\n");

	printf("----------------ft_memcmp----------------------\n");
	printf("s1 = hello / s1 = hella ? n = 5 : %d", ft_memcmp("hello", "hella", 5));
	printf("\n");
	printf("\n");

	printf("----------------ft_strnstr----------------------\n");
	const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
	printf("big: Foo Bar Baz / little: Bar / n = 6 : %s", ft_strnstr(largestring, smallstring, 6));
	printf("\n");
	printf("big: Foo Bar Baz / little: Bar / n = 7 : %s", ft_strnstr(largestring, smallstring, 7));
	printf("\n");	
	printf("\n");	

	printf("----------------ft_atoi----------------------\n");
	printf("pour '  -2147483648' : %d", ft_atoi("-2147483648"));
	printf("pour '-+s1' : %d", ft_atoi("-+s1"));
	printf("\n");	
	printf("\n");	

	printf("----------------ft_strdup----------------------\n");
	printf("pour 'koukou' : %s", ft_strdup("koukou"));
	printf("\n");	
	printf("\n");	
	
	printf("----------------ft_calloc----------------------\n");
	printf("vraie fonction avec 0 et 0 : %p", calloc(0, 0));
	printf("\n");	
	printf("ma fonction avec 0 et 0 : %p", ft_calloc(0, 0));
	printf("\n");	
	printf("\n");	

	printf("----------------ft_substr----------------------\n");
	printf("'hello ca va bien' / 9 / 6 : %s", ft_substr("hello ca va bien", 9, 6));
	printf("\n");	
	printf("'hello ca va bien' / 9 / 10 : %s", ft_substr("hello ca va bien",9, 10));
	printf("\n");	
	printf("s est null : %s", ft_substr(0 ,9, 10));
	printf("\n");	
	printf("'hello ca va bien' / 9 / 0 : %s", ft_substr("hello ca va bien",9, 0));
	printf("\n");	
	printf("\n");	

	printf("----------------ft_strjoin----------------------\n");
	printf("'hello' / 'salut' : %s", ft_strjoin("hello", "salut"));
	printf("\n");	
	printf(" 0 / 'salut' : %s", ft_strjoin(0, "salut"));
	printf("\n");	
	printf("'hello' / 0 : %s", ft_strjoin("hello", 0));
	printf("\n");	
	printf("0 / 0 : %s", ft_strjoin(0, 0));
	printf("\n");	
	printf("\n");	
	
	printf("----------------ft_strtrim----------------------\n");
	printf("'aaabbsalutba' / 'ab' : %s", ft_strtrim("aaabbsalutba", "ab"));
	printf("\n");	
	printf(" 0 / 'salut' : %s", ft_strtrim(0, "salut"));
	printf("\n");	
	printf("'hello' / 0 : %s", ft_strtrim("hello", 0));
	printf("\n");	
	printf("0 / 0 : %s", ft_strtrim(0, 0));
	printf("\n");	
	printf("\n");	
	
	printf("----------------ft_split---------------------\n");
	int	i1 = 0;
	char	**tab_split1 = ft_split("hello comment ca va", ' ');
	while (tab_split1[i1])
	{
		printf("test hello comment ca va : %s\n", tab_split1[i1]);
		i1++;
	}
	printf("\n");	
	printf("\n");

	printf("----------------ft_itoa---------------------\n");
	printf("-2147483648 : %s", ft_itoa(-2147483648));
	printf("\n");	
	printf("0 : %s", ft_itoa(0));
	printf("\n");	
	printf("\n");	

	}
