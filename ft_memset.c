void	ft_memset(void	*s, int	c, unsigned int n)
{
	while (n > 0)
	{
		*s = c;
		s++;
		n--;
	}
}
