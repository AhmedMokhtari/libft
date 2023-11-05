/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:08:44 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 18:12:32 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*ss;

	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	i = 0;
	while ((s[i] || ss[i]) && i < n)
	{
		if (s[i] > ss[i])
			return (1);
		if (ss[i] > s[i])
			return (-1);
		i++;
	}
	return (0);
}
