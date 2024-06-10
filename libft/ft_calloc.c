/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorpela <mkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:42:38 by mkorpela          #+#    #+#             */
/*   Updated: 2023/11/22 10:57:34 by mkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	size_max;
	char	*str;

	i = 0;
	size_max = -1;
	if (count != 0 && size > (size_max / count))
	{
		return (NULL);
	}
	str = malloc(size * count);
	if (str == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (i < size * count)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
