/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:15:17 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/19 16:41:24 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*min_int(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 12);
	str = "-2147483648";
	return (str);
}

static int	get_sign(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static int get_len(int n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
//	long	ncpy;
	char	*str;

	if (n == -2147483648)
		return (min_int());
	sign = get_sign(n);
	if (sign < 0 && n != -2147483648)
		n *= -1;
//	ncpy = n;
	len = get_len(n);
/*	while (ncpy >= 10)
	{
		++len;
		ncpy /= 10;
	}*/
	if (sign == -1)
		str = (char *)malloc(sizeof(char) * len + 2);
	else
		str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (sign == -1)
		str[0] = '-';
	str[len + 1] = 0;
	while (len > 0)
	{
		if (sign < 0)
			str[len] = (n % 10) + 48;
		else
			str[len - 1] = (n % 10) + 48;
		n /= 10;
		--len;
	}
	return (str);
}


#include <stdio.h>

int main()
{
	int n = 256;
	int n1 = -2147483648;
	int n2 = 0;
	printf("%s\n", ft_itoa(n));
	printf("%s\n", ft_itoa(n1));
	printf("%s\n", ft_itoa(n2));
}
