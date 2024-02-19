/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:27:26 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/19 15:28:25 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	int		len;
	char	buffer[8];
	int		i;
	char	*base;

	base = "0123456789abcdef";
	len = 0;
	if (n == 0)
		return (ft_putstr("0x0"));
	i = 0;
	len = 0;
	while (n != 0)
	{
		buffer[i] = base[n % 16];
		n /= 16;
		i++;
	}
	len += ft_putstr("0x");
	i--;
	while (i != -1)
	{
		len += ft_putchar(buffer[i]);
		i--;
	}
	return (len);
}
