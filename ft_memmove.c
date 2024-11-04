/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:14:53 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/28 16:09:18 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_null.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (!dst1 && !src1)
		return (NULL);
	if (src1 < dst1)
	{
		while (len > 0)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(dst1, src1, len);
	}
	return (dst1);
}
