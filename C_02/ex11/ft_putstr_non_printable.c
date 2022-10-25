#include <unistd.h>

void    ft_putstr(char c)
{
    write(1, &c, 1);
}

int printable(char x)
{
    if (x <= 126 && x >= 32)
        return (1);
    else
        return (0);
}

void ft_putstr_non_printable(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (printable(str[i]) == 1)
            ft_putstr(str[i]);
        else
        {
            ft_putstr('\\');
            ft_putstr("0123456789abcdef"[str[i] / 16]);
            ft_putstr("0123456789abcdef"[str[i] % 16]);
        }
        i++;
    }
}


int main()
{
    char a[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(a);
}
