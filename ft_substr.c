/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpisani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:43:13 by mpisani           #+#    #+#             */
/*   Updated: 2024/12/17 11:36:39 by mpisani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len2;
	size_t	i;
	char	*substr;

	len2 = 0;
	i = 0;
	if ((int)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (NULL);
	while (s[start + len2] != '\0' && len2 < len)
		len2++;
	substr = (char *)malloc((len2 + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
