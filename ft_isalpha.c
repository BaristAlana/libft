/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:05:42 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/13 13:06:47 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>

int	main(void)
{
   printf("a = %d\n", ft_isalpha('a'));
   printf("z = %d\n", ft_isalpha('z'));
   printf("A = %d\n", ft_isalpha('A'));
   printf("Z = %d\n", ft_isalpha('Z'));
   printf("1 = %d\n", ft_isalpha('1'));
   printf("  = %d\n", ft_isalpha(' '));
}*/
