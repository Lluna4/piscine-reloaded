/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:09:09 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/20 18:04:15 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		ret = ret * nb;
		nb--;
	}
	return (ret);
}
