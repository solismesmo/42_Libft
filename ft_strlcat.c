/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:41:12 by livieira          #+#    #+#             */
/*   Updated: 2023/08/11 04:52:23 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (dst[x] && x < size)
		x++;
	while (src[y] && x + y + 1 < size)
	{
		dst[x + y] = src[y];
		y++;
	}
	if (x != size)
		dst[x + y] = '\0';
	return (x + ft_strlen(src));
}
