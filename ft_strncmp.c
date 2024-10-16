/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:58:14 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/11 12:32:31 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

 int    ft_strncmp(const char *s1, const char *s2, size_t n)
 {
    int i;

    i = 0;
    while((s1[i] !='\0' || s2[i] !='\0')&& (int)n > i)
    {
        if (s1[i] == s2[i])
        {
            i++;
        }
        else if (s1[1] > s2[i])
        {
            return(s1[i] - s2[i]);
        }
        else 
        return(s1[i] - s2[i]);
    }
    return 0;
 }
 /*
 int main()
 {
    char a[]="aaaaaa";
    char b[]="aaaaa";
    printf("%d",ft_strncmp(a,b,10));
    
 }*/