/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mother.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:10:17 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/19 14:41:58 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_mother(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_putuint(va_arg(args, unsigned int));
	else if (c == 'p')
		len += ft_printadd(va_arg(args, unsigned long long));
	else if (c == 'x')
		len += ft_putex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_putex(va_arg(args, long long), "0123456789ABCDEF");
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}
