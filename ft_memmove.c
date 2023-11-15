/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:05:41 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/15 14:09:27 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t n)
{
	char		*p;
	const char	*q;
	size_t		i;

	q = (const char *)src + n - 1;
	if (dest < src || dest >= src + n)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		i = 0;
		p = (char *)dest + n - 1;
		while (i < n)
		{
			*p-- = *q--;
			++i;
		}
	}
}
