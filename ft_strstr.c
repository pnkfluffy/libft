/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 02:52:06 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 16:33:39 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *substr)
{
	int i;
	int j;

	j = 0;
	if (ft_strlen(substr) == 0)
		return ((char *)str);
	while (str[j])
	{
		i = 0;
		while (substr[i] == str[i + j])
		{
			i++;
			if (i == ft_strlen(substr))
				return ((char *)str + j);
		}
		j++;
	}
	return (0);
}
