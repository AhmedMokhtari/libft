/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokhtar <amokhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:05:01 by amokhtar          #+#    #+#             */
/*   Updated: 2023/11/03 23:57:46 by amokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;
	int				i;
	char			arr[12];

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		number = n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		number = n;
	i = 0;
	while (number > 0)
	{
		arr[i++] = number % 10 + '0';
		number = number / 10;
	}
	while (i--)
		ft_putchar_fd(arr[i], fd);
}
