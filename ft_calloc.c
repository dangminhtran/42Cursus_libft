#include "libft.h"

void    *calloc(size_t count, size_t size)
{
    void	*dest;

	if (size != 0 && count > (size_t) - 1 / size)
		return (NULL);
	dest = malloc(count * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, (count * size));
	return (dest);
}