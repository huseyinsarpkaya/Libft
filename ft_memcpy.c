/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:14:00 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 14:08:01 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *ptr1;
    char    *ptr2;
    size_t  i;

    i = 0;
    ptr1 = (char *)dst;
    ptr2 = (char *)src;
    while (i < n)
    {
        *(ptr1 + i) = *(ptr2 + i);
        i++;
    }
        return (dst);
}
/*
int main()
{
    char dest[]="aaaaa";
    char src[]="ccccc";
    ft_memcpy(dest,src,3);
    printf("%s",dest);
}
*/
// src bellek alanından dst bellek alanına n bayt kadarlık kısmını kopyalar.
