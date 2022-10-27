#include <unistd.h>

void    ft_putchar(char n)
{
    write(1, &n, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2", 2);
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        nb *= -1;
        ft_putnbr(nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int main()
{
    ft_putnbr(0);
}
