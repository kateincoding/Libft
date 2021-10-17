/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:17:29 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/11 15:27:57 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *start;
	t_list *current;

	start = NULL;
	if (lst)
	{
		start = f(ft_lstnew(lst->content, lst->content_size));
		current = start;
		while ((lst = lst->next))
		{
			current->next = f(ft_lstnew(lst->content, lst->content_size));
			current = current->next;
		}
		return (start);
	}
	return (NULL);
}
