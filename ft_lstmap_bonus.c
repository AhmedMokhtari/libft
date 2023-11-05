/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:45:40 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/05 17:24:24 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fi(t_list *lst, t_list *h, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmphead;
	t_list	*tmp;
	t_list	*t;
	void	*content;

	tmp = lst;
	t = h;
	while (tmp)
	{
		content = f(tmp->content);
		tmphead = ft_lstnew(content);
		if (!tmphead)
		{
			free(content);
			ft_lstclear(&h, del);
			return (1);
		}
		t->next = tmphead;
		t = t->next;
		tmp = tmp->next;
	}
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	void	*content;
	int		test_null;

	if (!lst || !f || !del)
		return (NULL);
	content = f(lst->content);
	head = ft_lstnew(content);
	if (!head)
	{
		free(content);
		return (NULL);
	}
	test_null = fi(lst->next, head, f, del);
	if (test_null)
		return (NULL);
	return (head);
}
