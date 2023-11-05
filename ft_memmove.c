/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:14:38 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/02 22:42:14 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_cpy;
	unsigned char	*src_cpy;

	if (!dst && !src)
		return (NULL);
	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char *)src;
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len--)
			dst_cpy[len] = src_cpy[len];
	}
	return (dst);
}
