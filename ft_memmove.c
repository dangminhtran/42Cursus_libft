#include "libft.h"

void    *ft_memmove(void* dest, const void *src, size_t size)
{
    size_t				i;
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (p_dest > p_src)
	{
		while (size > 0)
			p_dest[size] = p_src[size];
            size--;
	}
	else
	{
		i = 0;
		while (i < size)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	return (dest);
}