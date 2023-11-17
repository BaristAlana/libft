/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:26:39 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/16 15:35:08 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j])
		++j;
	if (size < i)
		j += size;
	else
		j += i;
	while (*src && (i < (size - 1)) && size != 0)
	{
		dest[i] = *src;
		++i;
		++src;
	}
	dest[i] = 0;
	return (j);
}