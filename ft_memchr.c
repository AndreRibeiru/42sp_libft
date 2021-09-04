/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annunes- <annunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 13:23:18 by annunes-          #+#    #+#             */
/*   Updated: 2021/08/27 18:12:34 by annunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*cpystr;

	i = 0;
	cpystr = (char *)str;
	while (cpystr[i] && i < n)
	{
		if (cpystr[i] == c)
			return ((char *)cpystr + i);
		i++;
	}
	if (c == '\0' && cpystr[i] == '\0')
		return ((char *)cpystr + i);
	return (NULL);
}
