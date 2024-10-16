/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:48 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/08 16:44:14 by husarpka         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h> 
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
