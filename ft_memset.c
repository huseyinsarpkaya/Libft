/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:45:05 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/11 10:53:00 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len--)
	{
		*ptr++ = (unsigned char )c;
	}
	return (b);

}/*
int main()
{
	char a[]="ffffff";
	int b = 97;
	size_t len= 3;
	printf("%s",ft_memset(a,b,len));
}*/
// b'nin ilk adresinden başlayarak len kadar baytlarını c değeriyle doldurur.
// İşlem sonucunda stringin tamamını alır.
