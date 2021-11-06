void	ft_memcpy(void *restrict dest, const void *restrict src, unsigned int n)
{
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
}
