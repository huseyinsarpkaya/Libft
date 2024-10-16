/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:54:28 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 11:00:46 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putendl_fd(char *s, int fd)
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd,"\n",1);
    
}
/*int main()
{
    ft_putendl_fd("sarp",1);
}*/