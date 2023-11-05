/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:50:58 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 18:08:43 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	char	*res;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	s = (char *)s1;
	i = 0;
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
