/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:08:04 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/20 18:08:32 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	index;

	index = 0;
	ret = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		ret[index] = min;
		min++;
		index++;
	}
	return (ret);
}
