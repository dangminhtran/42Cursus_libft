#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    if ((big == NULL || little == NULL) && !len)
        return (NULL);
    if (!little)
        return (big);
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (big[i + j] && little[j] && big[i + j] == little[j] && i + j < len)
            j++;
        if (!little[j])
            return (big + i);
        i++;
    }
    return (NULL);
}