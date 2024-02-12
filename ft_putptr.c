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

int	prepare_buffer(unsigned long long add, char *buffer)
{
	int	digit;
	int	i;

	i = 0;
	if (add == 0)
		return (ft_putchar('0'));
	while (add > 0)
	{
		digit = add % 16;
		if (digit > 10)
			buffer[i] = digit + 48;
		else
			buffer[i] = 'a' + (digit - 10);
		add /= 16;
		i++;
	}
	buffer[i] = '\0';
	return (0);
}

int	ft_putptr(unsigned long long add)
{
	int		l;
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * (base_len(add) + 1));
	if (!buffer)
		return (NULL);
	l = prepare_buffer(add, buffer);
	ft_reverse(buffer);
	l += ft_putstr(buffer);
	free(buffer);
	return (l);
}
