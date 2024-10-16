/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:32:39 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/16 12:10:02 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>  
char  *ft_strdup(const char *s1)
{
    char    *str;
    char    *result;
    int i;

    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!str)
    return (NULL);
    i = 0;
    result = str;
    while (*s1)
    {
        *str = *s1;
        s1++;
        str++;
    }
    *str = '\0';
    return (result);
    
}
int main()
{
    char   a[]="sarp";
    printf("%s",ft_strdup(a));
}