/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annunes- <annunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:27:44 by annunes-          #+#    #+#             */
/*   Updated: 2021/09/04 14:16:55 by annunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(const char *str1, const char *str2)
{
	size_t	i;
	size_t	j;
	size_t	sizestr;
	char	*newstr;

	i = 0;
	j = 0;
	sizestr = ft_strlen(str1) + ft_strlen(str2);
	newstr = (char *)malloc(sizeof(char) * (sizestr + 1));
	if (!newstr)
		return (NULL);
	while (str1[i])
	{
		newstr[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		newstr[i] = str2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	fullsize;
	char	*strjoined;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	fullsize = ft_strlen(s1) + ft_strlen(s2);
	strjoined = (char *)malloc(sizeof(char) * (fullsize + 1));
	if (!strjoined)
		return (NULL);
	strjoined = ft_strcat(s1, s2);
	return (strjoined);
}
