
int	ft_recursive_factorial(int nb)
{
    int	factorial;

	factorial = 1;
	if (nb > 0)
		factorial = nb * ft_recursive_factorial(nb - 1);
	else if(nb < 0)
		return (0);
	return	(factorial);
}
