/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:06:05 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 18:09:43 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	alloc_size(size_t len, size_t lens)
{
	if (lens < len)
		return (lens);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	lens;

	if (s == NULL)
		return (NULL);
	lens = ft_strlen(s);
	if (start > lens)
	{
		res = malloc(1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	lens = ft_strlen(&s[start]);
	len = alloc_size(len, lens);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
