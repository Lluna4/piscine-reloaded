/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:30:11 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/20 18:09:32 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb > 0)
		ret = ret * nb * ft_recursive_factorial(nb - 1);
	return (ret);
}
