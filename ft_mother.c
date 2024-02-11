/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mother.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:10:17 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/11 17:04:10 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_mother(const char *str, va_list args)
{
	int	len;

	len = 0;
	while (*str++)
	{
		if (*str++ == '%')
		{
			if (*str == 'c')
				len += ft_putchar(va_arg(args, int));
			else if (*str == 's')
				len += ft_putstr(va_arg(args, char *));
			else if (*str == 'd' || *str == 'i')
				len += ft_putnbr(va_arg(args, int));
			else if (*str == 'u')
				len += ft_putnbr(va_arg(args, unsigned int));
			else if (*str == 'x' || *str == 'X')
				len += ft_putex(va_arg(args, long long), *str);
			else if (*str == '%')
				len += ft_putchar('%');
		}
		else
			len += ft_putchar(*str);
	}
	return (len);
}
