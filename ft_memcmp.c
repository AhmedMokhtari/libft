/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:41:05 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 18:11:43 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1copy;
	unsigned char	*s2copy;
	size_t			i;

	i = 0;
	s1copy = (unsigned char *)s1;
	s2copy = (unsigned char *)s2;
	while (i < n)
	{
		if (s1copy[i] != s2copy[i])
			return (s1copy[i] - s2copy[i]);
		i++;
	}
	return (0);
}
