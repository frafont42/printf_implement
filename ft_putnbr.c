int    ft_putnbr(int n)
{
        unsigned int            i;

        if (n < 0)
        {
                ft_putchar_fd('-');
                i = (unsigned int)(n * -1);
        }
        else
                i = (unsigned int)n;
        if (i >= 10)
                ft_putnbr(i / 10);
        ft_putchar((char)(i % 10 + 48));
}
