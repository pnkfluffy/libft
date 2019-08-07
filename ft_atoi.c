/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 12:25:14 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/07 09:12:26 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long		finalnum;

	i = 0;
	finalnum = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && ft_isdigit(str[i]))
	{
		finalnum = finalnum * 10 + (unsigned long)str[i++] - '0';
		if (finalnum > 4697620490)
			return (sign == 0 ? -1 : 0);
	}
	return ((int)finalnum * sign);
}
