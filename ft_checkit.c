int	ft_checkit(char c)
{
	if (c == 'c' || c == 'd' || c == 'x' || c == 'X' || c == 's' || c == 'p' || c == 'u' || c == '%' || c == 'i')
		return (1);
	else
		return (0);
}

