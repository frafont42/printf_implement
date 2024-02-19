/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:03:44 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/19 15:14:10 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned long int n)
{
	long long	nb;
	int			len;

	len = 0;
	nb = (long long)n;
	if (nb < 0)
	{
		nb *= -1;
		len = ft_putnbr(4294967295 - nb + 1);
		return (len);
	}
	if (nb == 0)
		return (len + ft_putchar('0'));
	if (nb >= 10)
		len += ft_putuint(nb / 10);
	len += ft_putchar((char)(nb % 10 + 48));
	return (len);
}
