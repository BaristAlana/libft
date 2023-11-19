/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:42:34 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/19 23:05:02 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	size_t	len;
	char	*cmp;

	len = 0;
	cmp = (char *)s;
	while (cmp[len])
		++len;
	if (len > n)
		len = n;
	cmp += (len);
	while (len > 0)
	{
		if (*cmp == c)
			return (cmp);
		cmp--;
		--len;
	}
	if (cmp[0] == c)
		return (cmp);
	return (NULL);
}
