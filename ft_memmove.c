/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 17:03:48 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 12:19:54 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*srce;
	size_t			i;

	dest = (unsigned char *)dst;
	srce = (unsigned char *)src;
	i = -1;
	if (srce < dest)
		while (++i < len)
			dest[i] = srce[i];
	else if (srce > dest)
		while (--len > 0)
			dest[len + 1] = srce[len + 1];
	return (dst);
}
