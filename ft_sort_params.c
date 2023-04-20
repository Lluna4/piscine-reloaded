/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:04:05 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/20 18:26:23 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_swap(char **a, char **b)
{
	char	*buff;

	buff = *a;
	*a = *b;
	*b = buff;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}

char	**ft_sort(char **argv, int indexp, int ch)
{
	while (1)
	{
		if (argv[indexp] && argv[indexp + 1])
		{
			if (ft_strcmp(argv[indexp], argv[indexp + 1]) < 0)
			{
				ft_swap(&argv[indexp], &argv[indexp + 1]);
				ch++;
			}
			indexp++;
		}
		else
		{
			if (ch > 0)
			{
				indexp = 1;
				ch = 0;
			}
			else
				break ;
		}
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int		indexp;
	int		indexc;
	int		ch;
	char	jmp;

	jmp = '\n';
	if (argc < 1)
		return (0);
	indexp = 1;
	indexp = 1;
	while (argv[indexp])
	{
		ch = 0;
		indexc = 0;
		argv = ft_sort(argv, indexp, ch);
		while (argv[indexp][indexc])
		{
			ft_putchar(&argv[indexp][indexc]);
			indexc++;
		}
		ft_putchar(&jmp);
		indexp++;
	}
}
