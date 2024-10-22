/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:57:54 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/22 15:08:16 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (needle[a] == 0)
		return ((char *)haystack);
	while (haystack[b] && b < len)
	{
		a = 0;
		while (haystack[b + a] == needle[a] && (a + b < len))
		{
			a++;
			if (needle[a] == '\0')
			{
				return ((char *)haystack + b);
			}
		}
		b++;
	}
	return (0);
}
