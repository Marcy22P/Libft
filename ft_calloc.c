/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpisani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:38:38 by mpisani           #+#    #+#             */
/*   Updated: 2024/12/16 11:38:44 by mpisani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	size_t			i;
	unsigned char	*falloc;

	i = 0;
	total_size = count * size;
	if (size != 0 && total_size / size != count)
		return (NULL);
	falloc = malloc(total_size);
	if (!falloc)
		return (NULL);
	while (i < total_size)
	{
		((unsigned char *)falloc)[i] = 0;
		i++;
	}
	return (falloc);
}
