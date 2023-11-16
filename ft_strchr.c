/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:42:34 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/16 18:51:18 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
		++len;
	i = 0;
	while (i <= len)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		++i;
	}
	return (NULL);
}
