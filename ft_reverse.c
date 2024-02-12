/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:07:11 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/11 17:36:33 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_reverse(char *str)
{
	size_t	l;
	size_t	i;
	size_t	n;

	l = ft_strlen(str);
	n = l;
	i = 0;
	while (i < l)
	{
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = str[i];
		i++;
		l--;
	}
	str[n] = '\0';
}
