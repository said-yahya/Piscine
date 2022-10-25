#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int a;

    i = 0;
    while (dest[i] != '\0')
        i++;
    a = 0;
    while (a < nb && src[a] != '\0')
    {
        dest[i] = src[a];
        i++;
        a++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char src[] = "Network";
	char dest[] = "42 ";
	printf("%s", ft_strncat(dest, src, 5));
}