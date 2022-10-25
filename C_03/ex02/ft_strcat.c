#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int a;
    
    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    a = 0;
    while (src[a] != '\0')
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
    char    x[] = "wserdtfyghunjm";
    char    b[] = "adcfvgbhnj";
    printf("%s", ft_strcat(b, x));
}
