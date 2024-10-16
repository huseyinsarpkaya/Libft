/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:14:32 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/11 11:06:21 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include <stddef.h>
void    ft_bzero(void *s, size_t n)
{
    ft_memset(s,'\0',n);

}
/*
int main()
{
    char s[]="aaaaaa";
    size_t len =2;
     ft_bzero(s,len);
    printf("%c",s[1]);
    
    
}*/
// S stringin içerisine n bayt kadarlık kısmına null atar.
