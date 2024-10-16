/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:02:06 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 14:25:32 by husarpka         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	result;

	a = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			a *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	return (a * result);
}
 /*
 #include<stdio.h>
 int main()
 {
    char c[]="    ----+++-123";
    printf("%d",ft_atoi(c));
    
 }*/
