#include "../libft.h"
#include <stdio.h>
void test_split()
{
	char  s[] = "<<<me<gustan<<<las<<patatas<";
	char c = '<';
	char s2[] = "";
	char s3[] = "we love minecraft";
	char c2 = 0;
	char c3 = ' ';

	ft_split(s, c);
	ft_split(s2, c);
	ft_split(s3, c2);
	ft_split(s3, c3);
}

int main()
{
	test_split();
}
