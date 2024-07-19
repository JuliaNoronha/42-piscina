/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julleite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 00:47:29 by julleite          #+#    #+#             */
/*   Updated: 2024/07/14 15:16:28 by julleite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n){

char resultado;

if(n>=0){
	resultado='P';
	write(1, &resultado,1);

}

else {
	resultado='N';
	write(1,&resultado,1);

} }

int main(void)
{
      	ft_is_negative(-8);
        return (0);
}
