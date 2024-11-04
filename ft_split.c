/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:06:09 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/28 16:16:28 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_words(const char *str, char sep)
{
	int	word;

	word = 0;
	while (*str)
	{
		if (*str == sep)
			str++;
		else
		{
			word++;
			while (*str && *str != sep)
				str++;
		}
	}
	return (word);
}

static int	ft_count_len(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != sep)
	{
		i++;
	}
	return (i);
}

static char	**ft_free_memory(char **str)
{
	char	**ptr;

	ptr = str;
	while (*ptr)
	{
		free(*ptr);
		ptr++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	ptr = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			ptr[i] = (char *)malloc((ft_count_len(s, c) + 1) * sizeof(char));
			if (!ptr[i])
				return (ft_free_memory(ptr));
			ft_strlcpy(ptr[i], s, ft_count_len(s, c) + 1);
			s += ft_count_len(s, c);
			i++;
		}
	}
	ptr[i] = NULL;
	return (ptr);
}
