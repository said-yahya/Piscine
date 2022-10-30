
int ft_is_prime(int nb)
{
    int i;
    
    if (nb <= 1)
        return (0);
    else if (nb == 2)
        return (1);
    i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb < 2)
        return (2);
    while (nb >= 2)
    {
        if (ft_is_prime(nb) == 1)
            return (nb);
        nb++;
    }
    return (0);
}

#include <stdio.h>

int main()
{
    printf("%d", ft_find_next_prime(4));
}
