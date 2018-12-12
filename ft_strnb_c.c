/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnb_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlouisia <qlouisia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 11:45:54 by qlouisia          #+#    #+#             */
/*   Updated: 2018/12/09 11:47:09 by qlouisia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnb_c(char *str, char c)
{
	int	occur;

	occur = 0;
	while (str && *str)
		if (*str++ == c)
			occur++;
	return (occur);
}