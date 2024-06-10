/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_int_putnbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorpela <mkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:27:13 by mkorpela          #+#    #+#             */
/*   Updated: 2023/11/28 10:58:23 by mkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_int_putnbr(unsigned int n)
{
	int		return_value;
	size_t	print_length;

	return_value = 0;
	print_length = 0;
	if (n > 9)
	{
		return_value = unsigned_int_putnbr(n / 10);
		if (return_value == -1)
			return (-1);
		print_length += return_value;
		n = n % 10;
	}
	if (n >= 0 && n <= 9)
	{
		n += '0';
		return_value = write (1, &n, 1);
		if (return_value == -1)
			return (-1);
		print_length += return_value;
	}
	return (print_length);
}
