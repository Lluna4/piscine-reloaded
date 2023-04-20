/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:09:27 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/20 18:24:34 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_alphabet(void)
{
	int	a;

	a = 97;
	while (a < 123)
	{
		ft_putchar(a);
		a++;
	}
}
/*
int main()
{
	ft_print_alphabet();
}*/
