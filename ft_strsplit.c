/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:34:13 by qlouisia          #+#    #+#             */
/*   Updated: 2018/11/19 17:01:34 by qlouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		count_word(char *str, char sep)
{
	int	inaword;
	int	count;
	int i;

	inaword = 0;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != sep)
		{
			if (inaword == 0)
			{
				inaword = 1;
				count++;
			}
		}
		else
			inaword = 0;
		i++;
	}
	return (count);
}

static	int		count_char(char *str, char sep)
{
	int i;

	i = 0;
	while ((str[i] != sep) && (str[i] != '\0'))
		i++;
	return (i);
}

static char		*ft_strndup2(char **s1, char sep)
{
	char	*s2;
	int		i;
	size_t	n;

	n = count_char(*s1, sep);
	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * n + 1)))
		return (0);
	while ((**s1 != sep) && (**s1 != '\0'))
	{
		s2[i] = **s1;
		(*s1)++;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		wordnb;

	if ((!s) || (!c))
		return (NULL);
	i = 0;
	wordnb = count_word((char*)s, c);
	tab = NULL;
	if (!(tab = (char**)malloc(sizeof(char *) * count_word((char *)s, c) + 1)))
		return (NULL);
	while ((*s != '\0') && (i < wordnb))
	{
		while (*s == c)
			s++;
		if ((*s != c) && (*s))
		{
			if (!(tab[i++] = ft_strndup2((char **)&s, c)))
			{
				free(s2);
				return (NULL);
			}
		}
	}
	tab[i] = 0;
	return (tab);
}
