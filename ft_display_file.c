#include <unistd.h>
#include <fcntl.h>

void ft_putchar(char cha)
{
    write(1, &cha, 1);
}

void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

int main(int argc, char **argv)
{
    char ret[10];
    int fd;
    int index;

    index = 0;
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
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        ft_putstr("Cannot read file.");
        return (-1);
    }
    if (read(fd, ret, 10) == -1)
    {
        ft_putstr("Cannot read file.");
        return (-1);
    }
    ft_putstr(ret);
    while (read(fd, ret, 10))
    {
        ft_putstr(ret);
        while (ret[index])
        {
            ret[index] = 0;
            index++;
        }
        index = 0;
    }
    return (0);
}