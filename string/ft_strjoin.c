/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:30:58 by jfelty            #+#    #+#             */
/*   Updated: 2019/11/08 16:39:16 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates and returns a “fresh” string ending with ’\0’, result of the 
**	concatenation of s1 and s2. If the allocation fails the function returns
**	NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		x;
	int		y;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = ft_strnew(len1 + len2);
	if (!newstr)
		return (NULL);
	x = -1;
	y = -1;
	while (++x < len1)
		newstr[x] = s1[x];
	while (++y < len2)
		newstr[x++] = s2[y];
	return (newstr);
}
