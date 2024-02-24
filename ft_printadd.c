#include "ft_printf.h"

int ft_printadd(unsigned long long add)
{
	int len;

	len = 0;
	len += ft_putstr("0x");
	if (add == 0)
		len += ft_putchar('0');
	else
		len += ft_putptr(add);
	return (len);
}
