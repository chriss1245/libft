void	*ft_memcpy(void *restrict dest, const void *restrict src, unsigned int n)
{
	void	*d;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return d;
}
