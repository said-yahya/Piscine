
int ft_iterative_power(int nb, int power)
{
    unsigned int result;
    if (power < 0)
        return (0);
    else if (nb == 0 && power == 0)
        return (1);
    result = 1;
    while (power > 0)
    {
        result *= nb;
        power--;
    }
    return (result);
}
