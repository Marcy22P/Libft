/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpisani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:42:53 by mpisani           #+#    #+#             */
/*   Updated: 2024/12/16 11:56:45 by mpisani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)&haystack[i]);
	if (len == 0)
		return (NULL);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *haystack = "Hello, 42 students!";
// 	const char *needle1 = "42";
// 	const char *needle2 = "students";
// 	const char *needle3 = "world";
// 	const char *needle4 = "";
// 	const char *needle5 = "Hello";
// 	size_t len = 20;

// 	// Caso 1: Trovare una stringa nel range
// 	printf("Caso 1: %s\n", ft_strnstr(haystack, needle1, len));

// 	// Caso 2: Needle alla fine della stringa
// 	printf("Caso 2: %s\n", ft_strnstr(haystack, needle2, len));

// 	// Caso 3: Needle non presente
// 	printf("Caso 3: %s\n", ft_strnstr(haystack, needle3, len));

// 	// Caso 4: Needle vuoto
// 	printf("Caso 4: %s\n", ft_strnstr(haystack, needle4, len));

// 	// Caso 5: Needle all'inizio della stringa
// 	printf("Caso 5: %s\n", ft_strnstr(haystack, needle5, len));

// 	// Caso 6: Len troppo piccolo per trovare la stringa
// 	len = 3;
// 	printf("Caso 6: %s\n", ft_strnstr(haystack, needle1, len));
// 	return (0);
// }