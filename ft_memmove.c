/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annunes- <annunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 13:27:30 by annunes-          #+#    #+#             */
/*   Updated: 2021/09/03 21:49:58 by annunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cpydest;
	char	*cpysrc;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	cpydest = (char *)dest;
	cpysrc = (char *)src;
	i = 0;
	if (cpydest > cpysrc)
		while (n-- > 0)
			cpydest[n] = cpysrc[n];
	else
	{
		while (i < n)
		{
			cpydest[i] = cpysrc[i];
			i++;
		}
	}
	return (dest);
}
