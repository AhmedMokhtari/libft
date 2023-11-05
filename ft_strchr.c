/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:59:49 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 18:08:36 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	tmp;

	tmp = (unsigned char)c;
	i = 0;
	if (tmp == '\0')
	{
		return ((char *)(&s[ft_strlen(s)]));
	}
	while (s[i])
	{
		if (s[i] == tmp)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
