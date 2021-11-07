void	*ft_memset(void	*s, int	c, unsigned int n)
{
	unsigned char	*s_;
	
	s_ = (unsigned char *) s;
	while (n > 0)
	{
		*s_ = c;
		s_++;
		n--;
	}
	return (s);
}
