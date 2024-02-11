/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex_upper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:01:53 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/11 17:03:12 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putex_upper(size_t n)
{
	char	*base;
	char	*n_ex;
	int		l_ex;
	int		i;

	l_ex = ft_n_ex_len(n);
	i = 0;
	base = "0123456789ABCDEF";
	n_ex = (char *)malloc(sizeof(char) * (l_ex + 1));
	if (!n_ex)
		return (NULL);
	while (n > 0)
	{
		n_ex[i] = base[n % 16];
		n = n / 16;
		i++;
	}
	n_ex[i] = '\0';
	ft_reverse(n_ex);
	return (l_ex);
}
