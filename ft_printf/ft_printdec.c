/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:03:47 by martaga2          #+#    #+#             */
/*   Updated: 2024/03/06 13:20:13 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdec(int num)
{
	long int	i;

	i = 0;
	ft_putnbr(num);
	if (num >= 0)
		return (ft_countnum(num));
	i = (long int)num * (-1);
	return (ft_countnum(i) + 1);
}

void	ft_putnbr(int n)
{
	char	a;
	int		div;

	div = 1;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write (1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		n = -n;
	}
	while (n / div > 9)
		div *= 10;
	while (div != 0)
	{
		a = n / div + '0';
		write(1, &a, 1);
		n %= div;
		div /= 10;
	}
}

int	ft_countnum(long long num)
{
	int	i;

	i = 0;
	while (num >= 10)
	{
		i++;
		num /= 10;
	}
	return (i + 1);
}
