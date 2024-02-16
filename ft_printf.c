/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:01:55 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/16 20:39:46 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	ft_printf(const char *mainstr, ...)
{
	int		len;
	va_list	args;

	va_start(args, mainstr);
	len = 0;
	while (*mainstr)
	{
		if (*mainstr == '%')
		{
			mainstr++;
			len += ft_mother(*mainstr, args);
		}
		else
		{
			len += ft_putchar(*mainstr);
		}
		mainstr++;
	}
	va_end(args);
	return (len);
}

int main()
{
	int i,y;
	i= ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	y= printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%d il mio %d il suo\n", i, y);
} 