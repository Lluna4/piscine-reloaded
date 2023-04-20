/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:44:09 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/20 18:25:05 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_numbers(void)
{
	int	a;

	a = 48;
	while (a < 58)
	{
		ft_putchar(a);
		a++;
	}
}
/*
int main()
{
	ft_print_numbers();
}*/