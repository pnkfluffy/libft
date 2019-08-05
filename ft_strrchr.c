/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 02:25:02 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 16:33:26 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int b;

	i = -1;
	b = '\0';
	while (str[++i] != '\0')
	{
		if (str[i] == c)
		{
			b = i;
		}
	}
	if (b == '\0')
		return ((void *)(size_t)b);
	return ((char *)&str[b]);
}
