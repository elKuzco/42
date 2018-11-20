/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:27:30 by qlouisia          #+#    #+#             */
/*   Updated: 2018/11/19 11:32:23 by qlouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	int		i;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * ((int)n + 1))))
		return (0);
	return (ft_strncpy(s2, s1, n));
}
