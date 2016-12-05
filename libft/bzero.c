#include <stdio.h>
#include <assert.h>

void        ft_bzero(void *s, size_t n)
{
    size_t     i;

    i = 0;
    while (i < n)
    {
        ((unsigned char*)s)[i] = 0;
        i++;
    }
}

int     main(void)
{
    char s1[] = "hwegqgrgfffffftrh";
    ft_bzero(s1, 10);
    assert(s1[0] == 0);
    assert(s1[1] == 0);
    assert(s1[10] == 'f');
    assert(s1[11] == 'f');

    return (0);
}
