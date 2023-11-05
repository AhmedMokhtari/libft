/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:13:55 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 18:12:02 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	tmp;
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)b;
	tmp = (unsigned char) c;
	while (i < len)
	{
		s[i] = tmp;
		i++;
	}
	return (b);
}
