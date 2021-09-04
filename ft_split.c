/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annunes- <annunes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 01:05:15 by annunes-          #+#    #+#             */
/*   Updated: 2021/09/03 23:26:18 by annunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lettercount(const char *s, char c)
{
	int			lcount;

	lcount = 0;
	while (s[lcount] != c && s[lcount] != '\0')
		++lcount;
	return (lcount);
}

static size_t	wordcount(char const *s, char c)
{
	size_t		lcount;
	size_t		wcount;
	size_t		flag;
	size_t		start;

	lcount = 0;
	wcount = 0;
	flag = 0;
	while (s[lcount])
	{
		start = flag;
		if (s[lcount] == c)
			flag = 0;
		else
			flag = 1;
		if (start != flag && start == 1)
			++wcount;
		++lcount;
	}
	if (flag == 1)
		++wcount;
	return (wcount);
}

char	**ft_split(char const *s, char c)
{
	size_t		wcount;
	char		**receiver;
	int			lcount;

	if (!s)
		return (0);
	wcount = wordcount(s, c);
	receiver = ft_calloc(wcount + 1, sizeof(char *));
	if (!receiver)
		return (0);
	lcount = -1;
	wcount = 0;
	while (s[++lcount])
	{
		if (s[lcount] != c && s[lcount] != '\0')
		{
			receiver[wcount] = ft_substr(s, lcount, lettercount(&s[lcount], c));
			++wcount;
			lcount = lcount + lettercount(&s[lcount], c) - 1;
		}
	}
	return (receiver);
}
