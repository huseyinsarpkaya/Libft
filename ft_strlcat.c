/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:21:19 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 14:03:15 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    int j;
    size_t dest_len;
    size_t  src_len;
    
    j = 0;
    i = ft_strlen(dst);
    dest_len = ft_strlen(dst);
    src_len =  ft_strlen(src);
    
    if (dstsize < dest_len + 1)
    return (dstsize + src_len);
     if(dstsize > dest_len + 1)
    {
        while (i < dstsize - 1)
        {
        *(dst + i) = *(src + i);
        i++;
        }
        *(dst + i) = '\0';
        
    }
    return (dest_len + src_len);

}
/*
int main()
{ 
    char dest[7]= "aaaaaa";
    char src[8]= "ccccccc";
    size_t a =11;
    ft_strlcat(dest,src,a);
    //dest= (char )dest;

    printf("%s\n",dest);
    printf("%zu",ft_strlcat(dest,src,a));
}*/