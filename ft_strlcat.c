#include "libft.h"

size_t  ft_strlcat(char *dest, char *src, size_t size)
{
    size_t  i;
    size_t  dest_len;
    size_t  src_len;

    if ((dest == NULL || src == NULL) && !size)
        return 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = 0;

    if (size > dest_len + 1)
        return (size + src_len);
    else if (size > dest_len + 1)
    {
        while (src[i] != '\0' && (dest_len + i) < (size - 1))
        {
            dest[dest_len + i] = src[i];
            i++;
        }
    }
    dest[dest_len + i] = 0;
    return (dest_len + src_len);
}