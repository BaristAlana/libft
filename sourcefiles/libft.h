/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:43:51 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/15 11:27:42 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);

size_t	ft_strlen(char *str);

int		ft_isprint(int c);

int		ft_isdigit(int c);

int		ft_isascii(int c);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

void	ft_bzero(void *s, size_t n);

int		ft_atoi(char *str);

void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif
