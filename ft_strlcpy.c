#include "libft.h"

sitze_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (scr[i])
		i++;
	return i;
}
