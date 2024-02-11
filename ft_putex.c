int     ft_putex(size_t n, char x)
{
        char    *base;
        char    *n_ex;
        int             l_ex;
        int             i;

        l_ex = ft_n_ex_len(n);
        i = 0;
	if (x = 'x')
        	base = "0123456789abcdef";
	else if (x = 'X')
		base = "0123456789ABCDEF";
        n_ex = (char *)malloc(sizeof(char) * (l_ex + 1));
        if (!n_ex)
                return (NULL);
        while (n > 0)
        {
                n_ex[i] = base[n % 16];
                n = n / 16;
                i++;
        }
        n_ex[i] = '\0';
        ft_reverse(n_ex);
        l_ex = ft_putstr(n_ex);
        return (l_ex);
}
