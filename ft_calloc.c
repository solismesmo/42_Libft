/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:51:24 by livieira          #+#    #+#             */
/*   Updated: 2023/08/08 01:31:13 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*memory;
	unsigned int	temp;

	memory = NULL;
	temp = nmemb * size;
	if (!nmemb || !size || nmemb == temp / size)
		memory = malloc(temp);
	if (temp)
		ft_bzero(memory, temp);
	return (memory);
}
