/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:01:05 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 11:34:53 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include<unistd.h>
void ft_putnbr_fd(int n, int fd)
{
    long    nb;
    int c;
    
    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        write(fd,"-",1);
    }
     if (nb > 9)
    {
        ft_putnbr_fd(nb / 10,fd);
        ft_putnbr_fd(nb % 10,fd);
    }
    else
    c = nb + 48;
    write(fd, &c, 1);
}
int main()
{
    ft_putnbr_fd(1283,1);
    
}
