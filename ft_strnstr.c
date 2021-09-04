/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annunes- <annunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 13:39:11 by annunes-          #+#    #+#             */
/*   Updated: 2021/09/04 18:05:34 by annunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(str2);
	j = 0;
	k = 0;
	if (i == 0)
		return ((char *)str1);
	while (str1[j] != '\0' && (j + i - 1) < n)
	{
		while (str2[k] == str1[j + k])
		{
			if (k + 1 == i)
				return ((char *)str1 + j);
			k++;
		}
		k = 0;
		j++;
	}
	return (0);
}
