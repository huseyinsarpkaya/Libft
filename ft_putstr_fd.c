/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:49:35 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 10:53:13 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr_fd(char *s, int fd)
{
    unsigned    int i;
    
    i = 0;
    while (s[i])
    {
        write(fd, &s[i],1);
        i++;
    }
}
/*int main()
{
    ft_putstr_fd("sarpkaya",1);
    
}*/