/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 13:37:30 by jfelty            #+#    #+#             */
/*   Updated: 2019/11/08 16:57:19 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Takes an long long int value and returns a "fresh" string represeinting the
**	int converted to any base 2-16. If upper is 1, letters are returned in caps,
**	else lower.
*/

int		ft_lltoa_base_nbrlen(int64_t nb, int64_t base)
{
	int			length;
	int64_t		tmp;

	tmp = nb;
	length = 1;
	while ((tmp /= base) > 0)
		length++;
	return (length);
}

char	*ft_lltoa_base(int64_t n, int base, int return_upper)
{
	char		*str;
	int64_t		ll_base;
	int			i;
	int			length;

	ll_base = (int64_t)base;
	if (base < 2 || base > 16)
		return (NULL);
	length = ft_lltoa_base_nbrlen(n, (int64_t)base);
	str = (char *)malloc(sizeof(*str) * (length + 1));
	i = 0;
	while (i < length)
	{
		if (ll_base > 10 && (n % ll_base >= 10) && return_upper)
			str[i++] = (n % ll_base) - 10 + 'A';
		else if (ll_base > 10 && (n % ll_base >= 10))
			str[i++] = (n % ll_base) - 10 + 'a';
		else
			str[i++] = (n % ll_base) + '0';
		n /= ll_base;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}
