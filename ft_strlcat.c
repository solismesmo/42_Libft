/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:41:12 by livieira          #+#    #+#             */
/*   Updated: 2023/08/05 02:17:38 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dest;
	const char	*source;
	size_t		limiter;
	size_t		dest_len;

	dest = dst;
	source = src;
	limiter = size;
	while (limiter-- != 0 && *dst != '\0')
		dest++;
	dest_len = dest - dst;
	limiter = size - dest_len;
	if (limiter == 0)
		return (dest_len + ft_strlen(source));
	while (*source != '\0')
	{
		if (limiter != 1)
		{
			*dest++ = *source;
			limiter--;
		}
		source++;
	}
	*dest = '\0';
	return (dest_len + (source - src));
}
