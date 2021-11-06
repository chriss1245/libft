int	ft_isalpha(int c)
{
	if (c < 'A' || c > 'z')
		return (0);
	if (c > 'Z' &&  c < 'a')
		return (0);
	return (1);
}
