/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 07:48:42 by etaranti          #+#    #+#             */
/*   Updated: 2021/01/12 17:53:49 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *n)
{
	unsigned int	nb;
	int				sign;

	nb = 0;
	sign = 1;
	while (*n == ' ' || ((*n >= 9) && (*n <= 13)))
		n++;
	if (*n == '-' || *n == '+')
	{
		if (*n == '-')
			sign = -1;
		n++;
	}
	while (*n <= '9' && *n >= '0')
	{
		nb = nb * 10 + (*n - '0');
		n++;
		if (nb > 2147483647)
			break ;
	}
	if ((nb == 2147483648 && sign == -1) || nb < 2147483648)
		return (nb * sign);
	if (sign == 1)
		return (-1);
	return (0);
}
