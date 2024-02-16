int ft_particular(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	str = "ffffffffffffffff";
	while(*str)
	{
		i += ft_putchar(str[j]);
		j++;
	}
	return (i);
}
