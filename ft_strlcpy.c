/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:14:28 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 14:47:11 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include <stdio.h>


size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    if (dstsize > 0)
    {
        while (i < (dstsize -1) && src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
        }
      dst[i]='\0';
    }
      return (ft_strlen(src));
}
     
int main()
{
    char dest[]="aaaaa";
    char src[]="cccccc";
    size_t len = 6;

    
    ft_strlcpy(dest,src,len);
    printf("%s",dest);
}