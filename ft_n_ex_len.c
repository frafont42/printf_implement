int ft_n_ex_len(size_t n)
{
	int	i;

	i = 0;
	if (n = 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}
