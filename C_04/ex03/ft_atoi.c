#include <stdio.h>

int before_num(char *str, int *index)
{
    int i;
    int minus;
    
    i = 0;
    minus = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            minus *= -1;
        i++;
    }
    *index = i;
    return(minus);
}

int ft_atoi(char *str)
{
    int i;
    int number;
    int minus;
    
    number = 0;
    minus = before_num(str, &i);
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        number = (number * 10) + (str[i] - 48);
        i++;
    }
    number *= minus;
    return (number);
}

int main()
{
    char *num = "   ----+--+01223329ab567";
    printf("%d", ft_atoi(num));
}
