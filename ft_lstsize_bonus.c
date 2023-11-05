/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:19:09 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/03 17:26:03 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	if (!lst)
		return (0);
	count = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
