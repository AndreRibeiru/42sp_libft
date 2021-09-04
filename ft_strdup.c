/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annunes- <annunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:59:24 by annunes-          #+#    #+#             */
/*   Updated: 2021/08/27 18:14:50 by annunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*cpy;

	size = ft_strlen(str) + 1;
	cpy = malloc(size);
	if (cpy == NULL)
		return (NULL);
	return (ft_memcpy(cpy, str, size));
}
