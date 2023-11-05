/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:09:09 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/04 18:06:32 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_number(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static unsigned int	negative_test(int n, int *i)
{
	unsigned int	number;

	if (n < 0)
	{
		number = n * -1;
		*i = 1;
	}
	else
	{
		number = n;
		*i = 0;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	char			*s;
	int				i;
	unsigned int	number;
	int				size;

	number = negative_test(n, &i);
	size = count_number(number) + i;
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	if (n < 0)
		s[0] = '-';
	s[size] = '\0';
	while (--size >= i)
	{
		s[size] = number % 10 + '0';
		number = number / 10;
	}
	return (s);
}
