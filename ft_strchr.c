/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:02:39 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/11 12:21:55 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (i < (int)ft_strlen(s) +1)
    {
        if (*(s + i)== (char)c)
        return ((char *)s + i);
        i++;
    }
    return (NULL);
}/*
int main()
{
    char a[]="bbbbbbycccc";
    int c = 'y';
    char *result;
    result= ft_strchr(a,c);
    printf("%s",result);
    
}*/
// Dizide int c ile verilen karakteri arar ve bulduğu yerden itibaren diziyi yazar.