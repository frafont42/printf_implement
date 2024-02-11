int	ft_putptr(unsigned long long add)
{
	int	l;
	int	digit;
	char	*buffer;
	int	i;

	i = 0;
	l = 0;
	buffer = (char *)malloc(sizeof(char) * (base_len(add) + 1));
	if (!buffer)
		return (NULL);
	if (add == 0)
		len += ft_putchar('0');
	while (add > 0)
	{
		digit = add % 16;
		if (digit > 10)
			buffer[i] = digit + 48;
		else
			buffer[i] = 'a' + (digit - 10);
		add /= 16;
		i++;
	}
	buffer[i] = '\0';
	ft_reverse(buffer);
	len += ft_putstr(buffer);
}
