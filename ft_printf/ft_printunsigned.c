/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:59:36 by martaga2          #+#    #+#             */
/*   Updated: 2024/03/05 19:04:31 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int num)
{
	int	i;

	i = 0;
	if (num >= 10)
		i += ft_printunsigned (num / 10);
	ft_printchar (num % 10 + '0');
	i++;
	return (i);
}
