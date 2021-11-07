static int	str_len(char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = str_len((char *) s);
	while (len > 0)
	{
		if (*s == c)
			return (s);
		s++;
		len--;
	}
	return (0);
}

static int	str_len(char *s)
{
	int i;

	i = 0;
	while(s[i] != 0)
		i++;
	return (i)
}
