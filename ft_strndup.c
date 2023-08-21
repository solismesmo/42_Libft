/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:15:23 by livieira          #+#    #+#             */
/*   Updated: 2023/08/21 20:15:53 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*string;

	string = (char *)malloc(sizeof(char) * n + 1);
	if (string == NULL)
		return (NULL);
	string = ft_strncpy(string, s, n);
	string[n] = '\0';
	return (string);
}
