#include "../libft.h"
#include <stdio.h>

void	test_substr()
{
	char *s = "Lolito";
	unsigned int start = 1;
	size_t len = 5;

	printf("---------------------\n");
	printf("(%s) <olito>\n", ft_substr(s, start, len));
	printf("(%s) <s>\n", ft_substr("carlitos", 7, 8));
	printf("(%s) <(null)>\n", ft_substr("carlitos", 8, 0));
	printf("(%s) <(null)>\n", ft_substr("", 0, 0));
	printf("(%s) <>\n", ft_substr("tripouille", 1, 1));
}

int	main()
{
	test_substr();
}
