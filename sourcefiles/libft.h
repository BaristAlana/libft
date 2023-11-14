/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:43:51 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/14 17:09:13 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void	*ft_memset(void *s, int c, int n);

int		ft_strlen(char *str);

int		ft_isprint(int c);

int		ft_isdigit(int c);

int		ft_isascii(int c);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

void	ft_bzero(void *s, unsigned int n);

int		ft_atoi(char *str);

void	*ft_memcpy(void *dest, const void *src, unsigned int n);

#endif
