/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:43:24 by livieira          #+#    #+#             */
/*   Updated: 2023/08/03 21:18:45 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*pointer;
	unsigned char	match;

	i = 0;
	pointer = (unsigned char *)s;
	match = (unsigned char)c;
	while (i < n)
	{
		if (pointer[i] == match)
			return ((void *)pointer + i);
		i++;
	}
	return (NULL);
}
