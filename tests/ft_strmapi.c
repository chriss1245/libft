#include <stdio.h>
#include "../libft.h"

char conver_to_a(unsigned int i, char n)
{
	printf("%d %c;", i, n);
	return ('a');
}

void  test_strmmapi()
{
	char s[] = "pepito jjeuga futbol";
	printf("(%s)\n", ft_strmapi(s, &conver_to_a));
}

int main()
{
	test_strmmapi();
}
