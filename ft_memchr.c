/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:35:33 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/03 10:35:42 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			*s1;
	size_t					i;
	unsigned char			tmp;

	tmp = (unsigned char)c;
	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == tmp)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
