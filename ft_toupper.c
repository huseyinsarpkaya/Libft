/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:30:00 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/11 12:08:38 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <ctype.h>
#include<stdio.h>

int    ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    c -= 32;
    return(c);
}

/*int main()
{
    printf("%c",ft_toupper('a'));
   
}*/
