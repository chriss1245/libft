#include "../libft.h"
#include <stdio.h>

void test_itoa()
{
	int tests = 4;
	int n[tests];

	n[0] = 21412;
	n[1] = -1;
	n[2] = 2;
	n[3] = 0;
	int i = 0;
	while(i < tests)
	{
		printf("string: (%s), number (%i) \n", ft_itoa(n[i]), n[i]);
		i++;
	}
}

int main()
{
	test_itoa();
}
