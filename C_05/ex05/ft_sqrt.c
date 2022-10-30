int ft_sqrt(int nb)
{
    int a;
    
    if (nb <= 0)
        return (0);
    else if (nb == 1)
        return (1);
    a = 2;
    if (nb >= 2)
    {
        while (a * a <= nb)
        {
            if (nb == a * a)
                return (a);
            a++;
        }
    }
    return (0);
}

#include <stdio.h>

int main()
{
    printf("%d", ft_sqrt(121));
}
