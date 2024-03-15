#include "ft_printf.h"

int ft_printadd(unsigned long long add)
{
	int len;

	len = 0;
	if (add == 0)
	{
		len += ft_putstr("(nil)");
		return (len);
	}
	len += ft_putstr("0x");
	if (add != 0)
		len += ft_putptr(add);
	return (len);
}
