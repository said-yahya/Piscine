#include <stdio.h>

int ft_len(char *str)
{
    unsigned int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    len_src;
    unsigned int    len_dest;
    
    i = 0;
    while (dest[i] != '\0')
        i++;
    len_dest = i;
    len_src = ft_len(src);
    if (size == '\0' || size <= len_dest)
        return (size + len_dest);
    while (src[j] != '\0' && j < size - len_dest -1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (len_dest + len_src);
}

int main()
{
    char dest[] = "yahya";
    char src[] = "ali";
    printf("%d \n", ft_strlcat(dest, src, 7));
    printf("%s", dest);
}
