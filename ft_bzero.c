/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:41:12 by livieira          #+#    #+#             */
/*   Updated: 2023/07/28 01:57:01 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*c;

	i = 0;
	c = (char *) s;
	while (n)
	{
		c[i++] = '\0';
	}
	return ;
}

#include <stdio.h>
int main(void)
{
	char *s;
	
	s = "A";
	printf("%s\n", s);
	printf("%d\n", ft_bzero("A", 1));
	return (0);
}
