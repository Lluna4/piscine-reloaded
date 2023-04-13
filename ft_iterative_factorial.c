/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:09:09 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/13 17:40:32 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_interative_factorial(int nb)
{
    if (nb <= 0)
        return 0;
    int ret;
    ret = 1;
    while (nb > 0)
    {
        ret = ret * nb;
        nb--;
    }
    return ret;
}

