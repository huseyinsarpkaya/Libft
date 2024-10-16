/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:36:35 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/11 12:24:45 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

 char   *ft_strrchr(const char *s, int c)
 {
    int i;
    
    i = ft_strlen(s) + 1;
    while (i > 0)
    {
        if (*(s + i) == (char) c)
        return ((char *)s + i);
        i--;
    }
    return (NULL);
 }
 /*int main()
 {
    char a[]="aaaaaadaaaadaa";
    int b='d';
    char *result= ft_strrchr(a,b);
    printf("%c",*result);
    //printf("%s",ft_strrchr(a,b));
    
 }*/
//strchr ile aynı çalışır tek farkı aramayı tersten yapar.
//karakteri bulduktan sonra dizinin tamamını yazdırır.