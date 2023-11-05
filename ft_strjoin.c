/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:54:59 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 18:08:53 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	start;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	start = 0;
	while (s1[i])
		res[start++] = s1[i++];
	i = 0;
	while (s2[i])
		res[start++] = s2[i++];
	res[start] = '\0';
	return (res);
}
