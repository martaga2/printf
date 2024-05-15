/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:47:35 by martaga2          #+#    #+#             */
/*   Updated: 2024/03/05 21:36:45 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long long num, char c)
{
	unsigned long long	i;

	i = 0;
	if (num >= 16)
		i += ft_printhex(num / 16, c);
	if (c == 'x')
		ft_printchar("0123456789abcdef"[num % 16]);
	if (c == 'X')
		ft_printchar("0123456789ABCDEF"[num % 16]);
	i++;
	return (i);
}
