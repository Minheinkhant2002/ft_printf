#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	long	num;

	count = 0;
	num = n;
	if (num < 0)
	{
		count += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
		count += ft_putnbr((int)(num / 10));
	count += ft_putchar((num % 10) + '0');
	return (count);
}

int	ft_putunsigned(unsigned int n)
{
	int	count;
    int ret;

	count = 0;
	if (n >= 10)
    {
        ret = ft_putunsigned(n / 10);
        if (ret == -1)
            return (-1);
        count += ret;
    }
    ret = ft_putchar((n % 10) + '0');
	if (ret == -1)
        return (-1);
	return (count + ret);
}

int	ft_puthex(unsigned long n, char format)
{
	char	*base;
	int		count;

	count = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex(n / 16, format);
	count += ft_putchar(base[n % 16]);
	return (count);
}