char	*strchr(const char *s, int c)
{
	while (*s != 0 && *s == c)
		s++;
	return (s);
}
