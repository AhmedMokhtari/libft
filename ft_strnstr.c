/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:54:00 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/05 17:07:42 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	lenh;
	size_t	lenn;
	char	*dst;
	char	*src;

	dst = (char *)haystack;
	src = (char *)needle;
	lenn = ft_strlen(src);
	lenh = 0;
	while (lenh < len && dst[lenh])
		lenh++;
	if (lenn > lenh)
		return (NULL);
	if (lenn == 0 && lenh == 0)
		return (dst);
	i = 0;
	while (i < len - lenn + 1 && i < lenh)
	{
		if (!ft_strncmp(dst + i, src, lenn))
			return (dst + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	printf("%s\n",ft_strnstr(NULL,"test",0));
// 	return 0;
// }