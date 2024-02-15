/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:27:26 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/15 12:27:57 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static int	base_len(unsigned long long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}
int	ft_putptr(unsigned long long add)
{
	int		l;
	char	*buffer;

	l = 0;
	buffer = (char *)malloc(sizeof(char) * base_len(add));
	while (add > 0)
	{
		if (add % 16 > 10)
			*buffer = 'a' + (add % 16) - 10;
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
