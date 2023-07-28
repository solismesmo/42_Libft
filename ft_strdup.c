/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:09:29 by livieira          #+#    #+#             */
/*   Updated: 2023/07/27 19:28:24 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*point;
	int		i;

	i = 0;
	while (s[i])
		i++;
	point = malloc(i + 1);
	if (!point)
		return (0);
	i = 0;
	while (s[i])
	{
		point[i] = s[i];
		i++;
	}
	point[i] = '\0';
	return (point);
}
