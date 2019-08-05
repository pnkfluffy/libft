/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 12:25:14 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 12:18:57 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int finalnum;

	neg = 0;
	finalnum = 0;
	i = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		finalnum += str[i] - '0';
		finalnum *= 10;
		i++;
	}
	finalnum /= 10;
	if (neg)
		finalnum *= -1;
	return (finalnum);
}
