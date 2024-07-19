/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julleite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 00:00:11 by julleite          #+#    #+#             */
/*   Updated: 2024/07/14 15:14:17 by julleite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

char num='0';

void ft_print_numbers(void){
	char num='1';
	while (num<='9'){
		write(1, &num,1);
		num++;
	}
}

int main(void)
{
      	ft_print_numbers();
        return (0);
}
