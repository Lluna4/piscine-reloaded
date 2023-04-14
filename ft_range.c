#include <stdlib.h>
int *ft_range(int min, int max)
{
    int *ret;
    int index;
    
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
