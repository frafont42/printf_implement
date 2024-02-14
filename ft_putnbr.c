/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:26:13 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/14 13:58:01 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned long int	i;
	int					len;

	len = 0;
	if (n < 0 && n != -2147483648)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	i = (unsigned long)n;
	if (n == -2147483648)
	{
		len += ft_putchar('-');
		i *= -1;
	}
	if (i == 0)
		return (len + ft_putchar('0'));
	if (i >= 10)
		len += ft_putnbr(i / 10);
	len += ft_putchar((char)(i % 10 + 48));
	return (len);
}
