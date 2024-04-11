/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:27:26 by ffontana          #+#    #+#             */
/*   Updated: 2024/04/11 17:31:58 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long add)
{
	char	*base;
	int		len;

	len = 0;
	if (add == 0)
	{
		len += ft_putchar('0');
		return (len);
	}
	base = "0123456789abcdef";
	if (add >= 16)
	{
		len += ft_putptr(add / 16);
		len += ft_putptr(add % 16);
	}
	else
		len += ft_putchar(base[add % 16]);
	return (len);
}
