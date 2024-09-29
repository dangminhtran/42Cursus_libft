#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

//int	main() {
//	int i;
//	int test_ok;
//
//	i = -395 ;
//	test_ok = 1;
//
//	while (i++ <= 400) {
//		if (ft_isalpha(i) != isalpha(i))
//		{
//			printf("%d, FT : %d, ISALPHA : %d", i, ft_isalpha(i), isalpha(i));
//			test_ok = 0;
//		}
//
//		if (test_ok == 1)
//		{
//			printf("All good");
//		}
//	}
//	return 0;
//}