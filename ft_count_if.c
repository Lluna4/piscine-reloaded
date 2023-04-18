int ft_count_if(char **tab, int(*f)(char*))
{
    int ret;
    int buff;

    buff = 0;
    ret = 0;
    while (*tab)
    {
        buff = f(*tab);
        tab++;
        if (buff == 1)
            ret++;
    }
    return (ret);
}