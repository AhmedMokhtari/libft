/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:42:14 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/05 17:13:17 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;
	size_t	j;

	i = 0;
	src_len = ft_strlen(src);
	while (i < dstsize && dst[i])
		i++;
	if (i >= dstsize)
		return (dstsize + src_len);
	j = 0;
	while (src[j] && j < dstsize - i - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + src_len);
}
