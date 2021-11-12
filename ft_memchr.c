void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;
	unsigned char	d;

	str = (unsigned char *) s;
	d = (unsigned char) c;
	
	while (n > 0)
	{
		if (*str == d)
			return (str);
		str++;
		n--;
	}
	return (0);
}
