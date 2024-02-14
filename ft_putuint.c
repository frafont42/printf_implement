#include "ft_printf.h"

int	ft_putuint(unsigned int n)
{
	long long nb;
	int len;

	len = 0;
	nb = (long long)n;
	if (nb < 0)
	{
		nb *= -1;
		len = ft_putnbr(4294967295 - nb + 1);
		return (len);
	}
	if (nb == 0)
		return (len + ft_putchar('0'));
	if (nb >= 10)
		len += ft_putuint(nb / 10);
	len += ft_putchar((char)(nb % 10 + 48));
	return (len);
}
