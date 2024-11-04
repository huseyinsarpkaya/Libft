/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:36:37 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/28 16:03:18 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_numberlen(int number)
{
	int	i;

	i = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		i++;
	while (number > 0 || number < 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		len;
	long	nbr;

	nbr = n;
	len = ft_numberlen(n);
	if (nbr < 0)
		nbr = -nbr;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	buffer[len] = '\0';
	if (nbr == 0)
		buffer[0] = '0';
	while (nbr > 0)
	{
		buffer[--len] = (nbr % 10) + 48;
		nbr /= 10;
	}
	if (n < 0)
		buffer[0] = '-';
	return (buffer);
}
