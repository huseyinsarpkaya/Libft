/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:14:53 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 12:50:51 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    char *dst1;
    char *src1;
    
    i = 0;
    dst1 = (char *)dst;
    src1 = (char *)src;
    if (src1 < dst1)
    {
        while ((int)len-- > 0)
        *(dst1 + len) = *(src1 + len);
    }
    else 
    while (i < len)
    {
    *(dst1 + i) = *(src1 + i);
    i++;
    }
    return(dst);

}
/*   
int main()
{
    char dest[]="ccceyin";
    char src[]="ccccc";
    ft_memmove(dest,src,5);
    printf("%s",dest);
}
*/
// memcpy ile aynı çalışır.
// dst ile src nin çakıştığı durumlarda sondan kopyalama işlemi yapar.


int main()
{
    char str[50] = "mert okula geldi";
    ft_memmove(str + 10, str, 9);
    printf("memmove : %s\n", str);
    ft_memcpy(str + 7,str,13);
    printf("memcpy : %s",str);
}