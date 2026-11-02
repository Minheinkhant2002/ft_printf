
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int a = ft_printf("%c %s %d %i %u %x %X %p %%\n", 'A', "hi", -42, 7, 3000000000u, 255, 255, &a);
    int b =    printf("%c %s %d %i %u %x %X %p %%\n", 'A', "hi", -42, 7, 3000000000u, 255, 255, &a);
    printf("%d %d\n", a, b);
    ft_printf("%d %s\n", -2147483648, NULL);
}
