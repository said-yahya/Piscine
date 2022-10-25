#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int con;

    i = 0;
    con = 0;
    if (to_find[con] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        while (str[i + con] == to_find[con] && to_find[con] != '\0')
            con++;
        if (to_find[con] == '\0')
            return (str + i);
        i++;
        con = 0;
    }
    return (0);
}

int main()
{
    char a[] = "aaaa bbbb cccc dddd eeee fffff";
    char b[] = "cccc dddd";
    printf("%s", ft_strstr(a, b));
}
