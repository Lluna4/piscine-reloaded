#include <unistd.h>

int main(int argc, char** argv)
{
    int indexp;
    int indexc;
    char jmp;

    jmp = '\n';
    if (argc < 1)
        return 0;
    
    indexp = 1;
    while (argv[indexp])
    {
        indexc = 0;
        while (argv[indexp][indexc])
        {
            ft_putchar(&argv[indexp][indexc]);
            indexc++;
        }
        ft_putchar(&jmp);
        indexp++;
    }
}