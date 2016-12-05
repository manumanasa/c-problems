#include <stdio.h>

void        *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t      i;

    i = 0;
    while (i < n)
    {
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return (dst);
}

int     main(void)
{
    char s1[] = "1234567890";
    char s2[] = "bhaskar muppana";
    ft_memcpy(s2, s1, 4);
    printf("%s\n", s2);
    return (0);
}

