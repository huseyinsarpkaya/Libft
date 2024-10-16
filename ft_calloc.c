/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:24:44 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 17:42:32 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
  void  *ft_calloc(size_t count, size_t size)
  {
    size_t  i;
    char    *ptr;

    ptr = malloc(count * size);
    if (ptr)
    {
        ft_bzero(ptr, count * size);
    }
    return (ptr);
    
  }
  int main()
  {
    size_t a=2;
    size_t b=4;
    char *res;
    res = ft_calloc(a,b);
    printf("%p",res);
  }
  // count eleman sayısı size baytı temsil eder.
  // mallocla calloc arasındaki en temel fark calloc--
  // ramde açmış olduğu alana güvenlik açısından 0 ekler.