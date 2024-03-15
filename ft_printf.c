/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:01:55 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/19 15:06:46 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
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
