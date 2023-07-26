/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:24:10 by livieira          #+#    #+#             */
/*   Updated: 2023/07/26 04:33:10 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	c;
	int	sign;
	int	result;

	c = 0;
	sign = 1;
	result = 0;


	while (nptr[c] == '\t' || nptr[c] == '\v' || nptr[c] == '\n' \
	|| nptr[c] == '\r' || nptr[c] == '\f' || nptr[c] == ' ')
		c++;



	while (nptr[c] == '+' || nptr[c] == '-')
	{
		if (nptr[c] == '-')
			sign *= -1;
		c++;
	}


	while (nptr[c] >= '0' && nptr[c] <= '9')
	{
		result = (nptr[c] - '0') + (result * 10);
		c++;
	}

	return (result * sign);
}
