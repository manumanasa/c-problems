#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void        *ft_memset(void *b, int c, size_t len)
{
    size_t     i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

int     main(void)
{
    char *str1 = malloc(100);
    strcpy(str1, "hello there how do you do");
    ft_memset(str1, '%', 5);
    printf("%s\n", str1);
    return (0);
}
