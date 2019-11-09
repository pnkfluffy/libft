/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 02:03:20 by jfelty            #+#    #+#             */
/*   Updated: 2019/11/08 16:40:00 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	man 3 strchr
*/

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (c != str[i] && str[i] != '\0')
		i++;
	if (str[i] == '\0' && c != '\0')
		return (NULL);
	return ((char *)&str[i]);
}
