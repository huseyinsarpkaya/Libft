/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:53:27 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/22 15:30:14 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*finish;
	int		len;
	char	*buffer;

	finish = (char *)s1 + ft_strlen(s1) - 1;
	while (*s1 && ft_strchr(set,*s1))
		s1++;
	while (finish > s1 && ft_strchr(set, *finish))
		finish--;
	len = finish - s1 + 1;
	buffer = (char *)malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s1, len + 1);
	return (buffer);
}
