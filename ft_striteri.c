/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:33:24 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 17:38:09 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned    int i;
    
    i = 0;
    while (s[i])
    {
        f(i,&s[i]);
        i++;
    }
}/*
char ft_ft(unsigned int a,char b)
{
    return ()
}*/
