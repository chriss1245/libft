char	*ft_strchr(const char *s, char c)
{
	char			*s_;
	unsigned char	c_;
	
	s_ = (char *)s;
	c_ = (unsigned char) c;
	while (*s_ != 0)
	{
		if (*s_ == c_)
			return (s_);
		s_++;
	}
	if (c_ == 0)
		return (s_);
	return (0);
}
