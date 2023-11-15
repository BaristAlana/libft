/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:05:41 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/15 19:53:51 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp_dest;
	const char	*tmp_src;

	if (dest < src || dest >= src + n)
		ft_memcpy(dest, src, n);
	else
	{
		tmp_dest = (char *)dest + n - 1;
		tmp_src = (const char *)src + n - 1;
		while (n > 0)
		{
			*tmp_dest-- = *tmp_src--;
			--n;
		}
	}
	return (dest);
}
