#include "../ft_strncmp.c"

int main()
{
	char *s1 = "atoms\0\0\0\0";
	char *s2 = "atoms\0abc";
	unsigned int n = 8;

	printf("value = %i", ft_strncmp(s1, s2, n));
	prinft("value = %i", strncmp(s1, s2, n));
}
