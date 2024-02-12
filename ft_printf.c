/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:01:55 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/11 17:37:42 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *mainstr, ...)
{
	int		len;
	va_list	args;

	va_start(args, mainstr);
	len = 0;
	if (*mainstr == '%')
	{
		mainstr++;
		if (ft_checkit(*mainstr) == 1)
			len += ft_mother(mainstr, args);
		else
		{
			while (*mainstr++ && *mainstr != '%')
				len += ft_putchar(*mainstr);
		}
	}
	else
	{
		while (*mainstr++ && *mainstr != '%')
			len += ft_putchar(*mainstr);
	}
	va_end(args);
	return (len);
}
