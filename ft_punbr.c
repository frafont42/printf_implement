/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:10:37 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/11 17:03:21 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int n)
{
	unsigned int		i;

	if (n < 0)
	{
		ft_putchar_fd('-');
		i = (unsigned int)(n * -1);
	}
	else
		i = (unsigned int)n;
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_putchar((char)(i % 10 + 48));
}
