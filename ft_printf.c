/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorpela <mkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:47:20 by mkorpela          #+#    #+#             */
/*   Updated: 2023/11/27 19:41:50 by mkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		print_length;
	va_list	args;
	int		return_value;

	print_length = 0;
	return_value = 0;
	va_start(args, s);
	print_length = format_specifier_logic(s, args, return_value);
	va_end(args);
	return (print_length);
}
