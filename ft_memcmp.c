/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:20:58 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 15:31:29 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int   ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned    char *str1;
    unsigned    char *str2;
    size_t i;
    
    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (str1[i] == str2[i] && i < n)
    {
        i++;
    }
    return ((str1[i] - str2[i]));
    
}
int main()
{
    char a[]= "eeeeeeee";
    char b[]= "eeeeeeeea";
    printf("%d",ft_memcmp(a,b,9));
}