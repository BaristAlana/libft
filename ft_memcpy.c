/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:52:29 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/24 16:01:51 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

	i = 0;
	if (src == dest)
		return (dest);
	source = (char *) src;
	destination = (char *) dest;
	while (i < n)
	{
		destination[i] = source[i];
		++i;
	}
	return (dest);
}
