/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 13:02:22 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 13:48:51 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*newnextlist;
	t_list	*head;
	t_list	*elem;

	if (!lst || !f)
		return (NULL);
	elem = f(lst);
	if (!(newlist = ft_lstnew(elem->content, elem->content_size)))
		return (NULL);
	head = newlist;
	while (lst)
	{
		newnextlist = newlist->next;
		elem = f(lst);
		if (!(newlist = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
		newlist = newnextlist;
		lst = lst->next;
	}
	return (head);
}
