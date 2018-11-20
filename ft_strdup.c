/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlouisia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:35:31 by qlouisia          #+#    #+#             */
/*   Updated: 2018/11/19 11:26:50 by qlouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		size;
	int		i;

	size = ft_strlen(s1);
	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	return (ft_strcpy(s2, s1));
}
