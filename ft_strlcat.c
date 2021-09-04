/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annunes- <annunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:46:52 by annunes-          #+#    #+#             */
/*   Updated: 2021/09/03 22:32:45 by annunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t sizedest)
{
	size_t	i;
	size_t	j;

	if (sizedest <= ft_strlen(dest))
		return (sizedest + ft_strlen(src));
	i = ft_strlen(dest);
	j = 0;
	while ((src[j] != '\0') && ((i + 1) < sizedest))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
