/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:48 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/28 16:24:46 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

size_t	ft_strlen(const char *s)
{
	size_t	digit;

	digit = 0;
	while (*s)
	{
		s++;
		digit++;
	}
	return (digit);
}
