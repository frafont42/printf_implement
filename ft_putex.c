/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:52:14 by ffontana          #+#    #+#             */
/*   Updated: 2024/04/11 17:17:12 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putex(unsigned int n, char *base)
{
	int		i;
	char	n_ex[8];
	int		len;

	if (n == 0)
		return (ft_putchar('0'));
	i = 0;
	len = 0;
	while (n != 0)
	{
		n_ex[i] = base[n % 16];
		n /= 16;
		i++;
	}
	i--;
	while (i != -1)
	{
		len += ft_putchar(n_ex[i]);
		i--;
	}
	return (len);
}
