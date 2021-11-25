#include "../libft.h"
#include <stdio.h>

void test_strtrim()
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1, " \n\t");
	
	printf("\nis (%s)\n got (%s)\n", s2, ret);
}

int main()
{
	test_strtrim();
}
