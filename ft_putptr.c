#include "ft_printf.h"

int ft_putptr(void *ptr)
{
    int count;
    int ret;

    if (!ptr)
        return (ft_putstr("(nil)"));
    count = ft_putstr("0x");
    if (count == -1)
        return (-1);
    ret = ft_puthex((unsigned long)ptr, 'x');
    if (ret == -1)
        return (-1);
    return (count + ret);
}