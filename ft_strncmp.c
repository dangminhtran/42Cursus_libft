#include "libft.h"

int ft_strncmp(const char *s1,const char *s2, size_t len)
{
    size_t  i;

    if (!len)
        return (0);
    i = 0;
    while (i < (len - 1) && s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return (s1[i] - s2[i]);
}

//#include <stdio.h>
//#include <string.h>
//int	main()
//{
//    char *s1 = "Bonjour";
//    char *s2 = "Boijour";
//    printf("Original: %d\n", strncmp(s1, s2, 4));
//    printf("Result: %d\n", ft_strncmp(s1, s2, 4));
//    return (0);
//}

