/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:30:58 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 12:21:44 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*endstr;
	int		x;
	int		y;
	int		i;

	i = ft_strlen(s1) + ft_strlen(s2);
	endstr = (char *)malloc(sizeof(char) * (i) + 1);
	if (!endstr)
		return (NULL);
	if (s1 && s2)
	{
		x = -1;
		y = x;
		while (s1[++x])
			endstr[x] = s1[x];
		while (s2[++y])
			endstr[x + y] = s2[y];
		return (endstr);
	}
	return (NULL);
}
