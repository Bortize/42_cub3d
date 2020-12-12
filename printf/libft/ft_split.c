/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 13:11:17 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/12/12 14:45:22 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_countword(char const *s, char b)
{
	unsigned int	i;
	int				words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == b)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] && (s[i] != b))
			i++;
	}
	return (words);
}

static char			*ft_wordcopy(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char				**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;
	char	b;

	b = c == '\t' ? ' ' : c;
	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_countword(s, b)) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == b)
			i++;
		j = i;
		while (s[i] && s[i] != b)
			i++;
		if (i > j)
		{
			tab[k++] = ft_wordcopy(s + j, i - j);
		}
	}
	tab[k] = NULL;
	return (tab);
}
