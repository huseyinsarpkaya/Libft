/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:46:02 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/16 11:16:06 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include<stddef.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;
    size_t  j;

    if (!s)
    return (NULL);
    str = (char *)malloc(sizeof(*s) * (len + 1));
    if (!str)
    return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        if (i >= start && j < len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    
    str[j]='\0';
    return (str);
  
    
}
int main()
{
    char a[]="sarp kaya kocaeli";
    unsigned int b = 5;
    size_t len = 10;
    printf("%s",ft_substr(a,b,len));
}