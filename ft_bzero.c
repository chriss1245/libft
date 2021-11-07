void	ft_bzero(void	*s, unsigned int n)
{
	unsigned char *s_;
	
	s_ = s;
	while (n > 0)
	{
		*s_ = 0;
		s_++;
		n--;
	}
}
