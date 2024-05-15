/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:28:49 by martaga2          #+#    #+#             */
/*   Updated: 2024/03/05 21:36:37 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *format, ...);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printptr(unsigned long long ptr);
int		ft_printunsigned(unsigned int num);
int		ft_printdec(int num);
int		ft_printhex(unsigned long long num, char c);
void	ft_putnbr(int n);
int		ft_countnum(long long num);

#endif
