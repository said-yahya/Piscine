#include <stdio.h>

char    *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

char    *ft_strcapitalize(char *str)
{
    int i;
    int control;
    
    i = 0;
    control = 1;
    ft_strlowcase(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (control == 1)
                str[i] -= 32;
            control = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
            control = 0;
        else
            control = 1;
        i++;
    }
    return (str);
}

int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}
