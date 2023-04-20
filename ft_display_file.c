/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:05:40 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/20 18:23:57 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_err(int argc, int *fd, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.");
		return (-1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		return (-1);
	}
	*fd = open(argv[1], O_RDONLY);
	if (*fd == -1)
	{
		ft_putstr("Cannot read file.");
		return (-1);
	}
	return (0);
}

int	ft_print(char *ret, int fd)
{
	int	index;

	index = 0;
	if (read(fd, ret, 9) == -1)
	{
		ft_putstr("Cannot read file.");
		return (-1);
	}
	ft_putstr(ret);
	while (read(fd, ret, 9) > 0)
	{
		ft_putstr(ret);
		while (ret[index])
		{
			ret[index] = '\0';
			index++;
		}
		index = 0;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	ret[10];
	int		fd;
	int		index;
	int		err;

	index = 0;
	err = ft_err(argc, &fd, argv);
	if (err != 0)
		return (err);
	return (ft_print(ret, fd));
}
