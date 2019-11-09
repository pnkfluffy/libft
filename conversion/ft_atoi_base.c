/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:48:44 by jfelty            #+#    #+#             */
/*   Updated: 2019/11/08 16:57:18 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Takes an string representation of a number in any base 2-16 and converts it
**	and returns it as an int base 10 value.
*/

int		get_digit(char c, int base)
{
	int max_digit;

	max_digit = 0;
	if (base <= 10)
		max_digit = base + '0';
	else
		max_digit = base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int res;
	int sign;
	int digit;

	res = 0;
	sign = 1;
	digit = 0;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while ((digit = get_digit(ft_tolower(*str), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (digit * sign);
		++str;
	}
	return (res);
}
