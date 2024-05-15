/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:45:44 by martaga2          #+#    #+#             */
/*   Updated: 2024/03/06 14:33:59 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_search(char const *str, int i, va_list *args)
{
	int	c;

	c = 0;
	if (str[i] == 'c')
		c += ft_printchar(va_arg(*args, int));
	if (str[i] == 's')
		c += ft_printstr(va_arg(*args, char *));
	if (str[i] == 'p')
		c += ft_printptr(va_arg(*args, unsigned long long));
	if (str[i] == 'u')
		c += ft_printunsigned(va_arg(*args, unsigned int));
	if (str[i] == 'd' || (str[i] == 'i'))
		c += ft_printdec(va_arg(*args, int));
	if (str[i] == 'x' || (str[i] == 'X'))
		c += ft_printhex(va_arg(*args, unsigned int), (str[i]));
	if (str[i] == '%')
		c += ft_printchar('%');
	return (c);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, format);
	if (write (1, "", 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			j += ft_printchar(format[i]);
		else
		{
			i++;
			j += ft_search(format, i, &args);
		}
		i++;
	}
	va_end(args);
	return (j);
}

/*int	main(void)
{
	char	*name		= "John";
	int		num_messages= 5;

	ft_printf("Hello, %s! You have %d new messages.\n", name, num_messages);
	return (0);
}*/
