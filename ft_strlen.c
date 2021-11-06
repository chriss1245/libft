int	ft_strlen(char *c)
{
	int	len;

	len = 0;
	while (*c != 0)
	{
		len++;
		c++;
	}
	return (len);
}
