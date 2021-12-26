/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:58:29 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/03 16:58:30 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_words(char const *str, char sep)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != sep && str[i])
			i++;
		result++;
	}
	return (result);
}

static	char	*get_next_word(const char *str, int *i, char sep)
{
	int		j;
	char	*new;

	while (str[*i] == sep)
		if (str[(*i)++] == '\0')
			return (0);
	j = 0;
	while (str[*i + j] != sep && str[*i + j])
		j++;
	if (j != 0)
	{
		new = (char *)malloc(sizeof(char) * (j + 1));
		if (!new)
			return (0);
		j = 0;
		while (str[*i] != sep && str[*i])
			new[j++] = str[(*i)++];
		new[j] = '\0';
	}
	else
		return (0);
	return (new);
}

char	**ft_split(char const *str, char sep)
{
	char	**list;
	char	*word;
	int		*i;
	int		j;
	int		k;

	list = (char **)malloc(sizeof(char *) * (str_words(str, sep) + 1));
	if (!list)
		return (0);
	j = 0;
	i = &j;
	k = 0;
	while (k < str_words(str, sep))
	{
		word = get_next_word(str, i, sep);
		if (!word)
			break ;
		list[k++] = word;
	}
	list[k] = 0;
	return (list);
}
