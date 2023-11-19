/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:42:34 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/19 23:02:45 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cmp;
	unsigned char	non_num_char;

	non_num_char = (unsigned char) c;
	cmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (cmp[i] == non_num_char)
			return ((void *) &cmp[i]);
		++i;
	}
	return (NULL);
}
