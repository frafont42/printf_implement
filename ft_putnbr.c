/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:26:13 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/12 12:40:21 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr(int n)
{
	unsigned long int	i;
	int					len;

	i = (unsigned long)n;
	len = 0;
	if (n < 0)
	{
		ft_putchar_fd('-');
		i *= -1;
	}
	else if (i == 0)
		return (len + ft_putchar('0'));
	else if (i >= 10)
		len += ft_putnbr(i / 10);
	len += ft_putchar((char)(i % 10 + 48));
	return (len);
}
