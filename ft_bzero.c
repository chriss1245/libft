void	ft_bzero(void	*s, unsigned int n)
{
	while (n > 0)
	{
		*s = 0;
		s++;
		n--;
	}
}
