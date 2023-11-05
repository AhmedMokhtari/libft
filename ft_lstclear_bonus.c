/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:12:36 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 17:56:15 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!lst || !del)
		return ;
	tmp1 = *lst;
	while (tmp1)
	{
		tmp2 = tmp1;
		del(tmp2->content);
		tmp1 = tmp1->next;
		free(tmp2);
	}
	*lst = NULL;
}
