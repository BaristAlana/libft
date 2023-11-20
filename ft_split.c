/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:45:13 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/20 19:23:17 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	control;
	int	wc;

	i = 0;
	control = 0;
	while (s[i])
	{
		if (s[i] != c && control == 0)
		{
			wc++;
			control = 1;
		}
		else if (s[i] == c)
			control = 0;
		++i;
	}
	return (wc);
}

static void	*freeall(char **str, int nbr_w)
{
	int	i;

	i = 0;
	while (i < nbr_w)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	*ft_putword(int start, int end, const char *str)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		++i;
		++start;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		start_index;
	int		i;
	int		j;
	char	**arr;

	start_index = -1;
	i = 0;
	j = 0;
	arr = ft_calloc(ft_wordcount(s, c) + 1, (sizeof(char *)));
	if (!arr)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start_index < 0)
			start_index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start_index >= 0)
		{
			arr[j] = ft_putword(start_index, i, s);
			if (!arr[j])
				return (freeall(arr, j));
			++j;
			start_index = -1;
		}
		++i;
	}
	return (arr);
}

/*#include <stdio.h>

void	affiche_liste(char **liste)
{
	while (*liste)
	{
		printf("%s\n", *liste);
		liste++;
	}
}

int	main(void)
{
	char	**liste;

	liste = ft_split("Salut  les amis :3", ' ');
	printf("%d\n", ft_wordcount("Salut les  amis :3", ' '));
	affiche_liste(liste);
	return (0);
}*/
