void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char	*dest_;
	unsigned char	*src_;

	dest_ = dest;
	src_ = (unsigned char*) src; 
	
	if (dest == 0 && src == 0)
		return (dest);
	while (n > 0)
	{
		*dest_ = *src_;
		dest_++;
		src_++;
		n--;
	}
	return dest;
}
