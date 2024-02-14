/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:27:26 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/12 13:47:35 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long add)
{
	int		l;
	char	*buffer;

	l = 0;
	while (add > 0)
	{
		if (add % 16 > 10)
			*buffer = 'a' + (add % 16) -10;
		else
			*buffer = (add % 16) + 48;
		buffer++;
		add /= 16;
	}
	*buffer = '\0';
	ft_reverse(buffer);
	l += ft_putstr(buffer);
	free(buffer);
	return (l);
}
