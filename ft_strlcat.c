/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 00:49:52 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 12:21:46 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t b;

	i = 0;
	b = 0;
	while (dest[i])
		i++;
	while (src[b] && n > 0)
	{
		dest[i + b] = src[b];
		b++;
		n--;
	}
	dest[i + b] = '\0';
	return (i + b);
}
