/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:03:28 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 14:24:29 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	set_start(const char *s, const char *set)
{
	size_t	i;

	i = 0;
	while (s[i] && is_set(s[i], set))
		i++;
	return (i);
}

static size_t	set_end(char *s, char *set, size_t len_s, size_t start)
{
	size_t	i;

	i = len_s;
	if (i == 0)
		return (0);
	i--;
	while (i > 0 && i > start && is_set(s[i], set))
		i--;
	return (i);
}

void	initial(size_t *t, size_t *i)
{
	*t = 2;
	*i = 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	t;

	if (!s1 || !set)
		return (NULL);
	start = set_start(s1, set);
	end = set_end((char *)s1, (char *) set, ft_strlen(s1), start);
	initial(&t, &i);
	if (end == 0 && start == 0)
		t = 1;
	res = (char *)malloc(sizeof(char) * ((end - start) + t));
	if (!res)
		return (NULL);
	if (t == 1)
	{
		res[0] = '\0';
		return (res);
	}
	while (start <= end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
