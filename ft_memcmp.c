int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = s1;
	str2 = s2;
	while (n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2)
		n--;
	}

}
