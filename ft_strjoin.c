/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:30:47 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/18 18:51:56 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*strjoined;

	i = 0;
	j = 0;
	strjoined = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
			* sizeof(char));
	if (!strjoined)
		return (NULL);
	while (s1[i])
		strjoined[j++] = s1[i++];
	i = 0;
	while (s2[i])
		strjoined[j++] = s2[i++];
	strjoined[j] = 0;
	return (strjoined);
}
