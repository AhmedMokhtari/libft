/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:55:59 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 18:09:33 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	tmp;

	i = ft_strlen(s);
	tmp = (char)c;
	while (i >= 0)
	{
		if (s[i] == tmp)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
