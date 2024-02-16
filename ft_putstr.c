/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:11:49 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/16 19:58:02 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		i += ft_putstr("(null)");
		return (i);
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	// printf("\n%d quisto in putstr\n", i);
	return (i);
}
