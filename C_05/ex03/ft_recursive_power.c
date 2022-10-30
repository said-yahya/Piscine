
int ft_recursive_power(int nb, int power)
{
    unsigned int result;
    
    result = 1;
    if (power < 0)
        return (0);
    else if (nb == 0 && power == 0)
        return (1);
    else if (power > 0)
        result = nb * ft_recursive_power(nb, (power - 1));
    return (result);
}
