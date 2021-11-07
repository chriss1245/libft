void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	void		*buff;

	i = 0;
	while (i < n)
	{
		buff[i] = src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = buff[i]
		i++;
	}

}
