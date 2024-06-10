/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorpela <mkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:53:09 by mkorpela          #+#    #+#             */
/*   Updated: 2023/11/28 10:57:39 by mkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		int_putchar(char c);
int		int_putstr(const char *s);
int		int_putnbr(int n);
int		format_specifier_logic(const char *s, va_list args, int return_value);
size_t	ft_strlen(char const *s);
int		convert_long_to_hex(unsigned long num);
int		uint_to_lowercase_hex(unsigned int num);
int		uint_to_uppercase_hex(unsigned int num);
int		unsigned_int_putnbr(unsigned int n);

#endif