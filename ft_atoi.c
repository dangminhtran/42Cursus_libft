#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int nb;
    int result;

    i = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    sign = 1;
    nb = 0;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
        nb++;
    }
    result = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        i++; 
    }
    if (nb > 1)
        return (0);
    return (result * sign);
}

//#include <stdio.h>
//#include <string.h>
//int	main(int argc, char **argv)
//{
// 	if (argc > 1)
// 	{
// 		printf("Original: %d\n", atoi(argv[1]));
// 		printf("Result: %d\n", ft_atoi(argv[1]));
// 	}
// 	return (0);
//}