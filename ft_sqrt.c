/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:41:24 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/14 14:22:02 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_sqrt(int nb)
{
    float pred;
    float prec;
    
    if (nb < 1)
        return 0;
    pred = nb >> 1;
    prec = 0.001;
    
    while((pred * pred - nb) > prec)
        pred = (int)(pred + nb / pred ) >> 1;
    return((int)pred);
}

int main()
{
    printf("%i", ft_sqrt(3923923));
}