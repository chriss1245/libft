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
	char **splt1 = ft_split(s, c);
	char **splt2 = ft_split(s2, c);
	char **splt3 = ft_split(s3, c2);
	char **splt4 = ft_split(s3, c3);
	char **splt5 = ft_split("  tripouille  42  ", ' ');

	int i=0;
	printf("words: \n");
	while (i <4)
	{
		printf("(%s)", splt1[i]);
		i++;
	}
	system("leaks a.out");
}

int main()
{
	test_split();
}
