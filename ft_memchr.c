/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:19:52 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/11 12:40:31 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n )
    {
        if (((unsigned char *)s) [i] == ( unsigned char )c)
        return ((void *)(s + i));
        i++;
    }
    return (NULL);


}/*
#include <stdio.h>

int main()
{
    char a[]="sarpkaya";
    int b = 'u';
    char *result=ft_memchr(a,b,5);
    printf("%s",result);

}*/
// Herhangi türdeki bellek alanındaki n baytlık kısımdaki c karakterini dizide arar.
// Karakteri bulduktan sonraki stringin tamamını  yazdırır.