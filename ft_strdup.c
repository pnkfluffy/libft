/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:43:52 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 16:29:26 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;

	i = -1;
	str = (char*)malloc(sizeof(str) * (ft_strlen(src) + 1));
	while (src[++i])
		str[i] = src[i];
	return (str);
}
