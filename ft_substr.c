/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:04:16 by livieira          #+#    #+#             */
/*   Updated: 2023/08/09 02:56:14 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s);
	if (start >= len_s)
		return (NULL);
	if (len_s - start < len)
		len = len_s - start;
	substring = malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = -1;
	while (s[++i + start] && (i < len))
		substring[i] = s[start + i];
	substring[len] = '\0';
	return (substring);
}
