/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:24:59 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/24 16:08:55 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (size != 0 && i < size - 1 && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	if (i < size)
		dest[i] = 0;
	return (ft_strlen(src));
}
