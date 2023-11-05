/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:16:44 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 18:08:30 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c, int *p, int *d)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	*p = 0;
	*d = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	skip(char const *s, char c, int *i)
{
	while (s[*i] && s[*i] == c)
		(*i)++;
}

static void	myfree(char **s, int d)
{
	int	i;

	i = 0;
	while (i < d)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static void	adress_ret(char const *s, char c, int *i, int *j)
{
	*j = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
}

char	**ft_split(char const *s, char c)
{
	int		arr[2];
	int		d;
	int		words;
	char	**res;

	if (!s)
		return (NULL);
	words = word_count(s, c, &arr[0], &d);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	skip(s, c, &arr[0]);
	while (words--)
	{
		adress_ret(s, c, &arr[0], &arr[1]);
		res[d++] = ft_substr(s, arr[1], (arr[0] - arr[1]));
		if (!res[d - 1])
		{
			myfree(res, d - 1);
			return (NULL);
		}
		skip(s, c, &arr[0]);
	}
	res[d] = NULL;
	return (res);
}
